#include <bits/stdc++.h>
using namespace std;
int n,d=0;
bool a[100];

void show() {
    for (int i = 1; i <= n; i++)
        if (a[i])   cout<<i<<" ";
    cout<<"\n";
}

void bt(int u) {
    if (u == n + 1) {
        show();
        return;
    }
    a[u] = 0;
    bt(u + 1);
    a[u] = 1;
    bt(u + 1);
}
int main() {
    cin>>n;
    bt(1);
}
