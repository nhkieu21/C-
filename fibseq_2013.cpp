#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
bool kt (long long n)
{
    long long i;
    for (i=3;i<=n;i++)
    {
        if (a[i]!= a[i-1]+a[i-2])
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    freopen("FIBSEQ.INP","r",stdin);
    freopen("FIBSEQ.OUT","w",stdout);
    long long i,n;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if (kt(n) && n>=3) {cout<<1;} else {cout<<0;}
}
