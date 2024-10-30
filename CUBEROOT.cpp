#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 5;
const long long M = 1e9 + 7;
int h,n;
bool c[maxN];
int Divisor[maxN];
int Count[maxN];
void kt() {
	for(int i=1;i<maxN;i++) c[i]=1,Divisor[i]=i;
    int k=floor(sqrt(maxN));
    for(int i=2;i<=k;i++) if(c[i]) {
	    int j=i+i;
        while(j<maxN) Divisor[j]=i,c[j]=0,j+=i;
    }
}
inline void Calc(int n) {
    while(n != 1) Count[Divisor[n]]++, n /= Divisor[n];
}

int main() {
	freopen("CUBEROOT.INP", "r", stdin);
	freopen("CUBEROOT.OUT", "w", stdout);
        kt();
	scanf("%d", &h);
	while(h--) {
		memset(Count, 0, sizeof(Count));
		scanf("%d", &n);
		for(int i = 1; i <= n; i++) Calc(i);
		long long res = 1;
		for(int i = 1; i <= n; i++) {
			int Pow = Count[i] / 3 * 3;
			if(!Pow) continue;
			while(Pow--) res *= i, res %= M;
		}
		printf("%lld\n", res);
	}
}
