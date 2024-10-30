#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],m;
int main ()
{
    freopen("IMAGE.INP","r",stdin);
    freopen("IMAGE.OUT","w",stdout);
    ios::sync_with_stdio(0);cin.tie(0);

    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            a[i][j]=a[i][j]+a[i][j-1];
        }
        for (int j=1;j<=m;j++)
        {
            a[i][j]=a[i][j]+a[i-1][j];
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
