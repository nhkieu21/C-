#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("SUMRECOVER.INP","r",stdin);
    freopen("SUMRECOVER.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int n,a[100001],m,kq,b,x,y;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for (int i=1;i<=m;i++)
    {
        cin>>b>>x>>y;
        kq=0;
        if (b==0)
        {
            a[x]=y;
        } else if (b==1)
        {
            for (int j=x;j<=y;j++)
            {
                kq=kq+a[j];
            }
            cout<<kq<<endl;
        }
    }
}
