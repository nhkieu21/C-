#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],b[1001][1001],c[1001][1001];
int main ()
{
    freopen("MATSUM.INP","r",stdin);
    freopen("MATSUM.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);

    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cin>>b[i][j];
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
