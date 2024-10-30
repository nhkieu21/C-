#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],b[1001][1001],c[1001][1001],kq;
int main ()
{
    freopen("UPPERHALF.INP","r",stdin);
    freopen("UPPERHALF.OUT","w",stdout);
    ios::sync_with_stdio(0);cin.tie(0);

    cin>>n;
    kq=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if (j>i) {kq=kq+a[i][j];}
        }

    }
    cout<<kq;
}
