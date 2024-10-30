#include<bits/stdc++.h>
using namespace std;
long long m,n,k,i,j,h,d,kq,x[100001],y[100001],s[100001],a[100001];
int main ()
{
    freopen("SEQGAME.INP","r",stdin);
    freopen("SEQGAME.OUT","w",stdout);

    cin>>m>>n>>k;
    for (i=1;i<=m;i++)
    {
        cin>>x[i];
    }
    for (i=1;i<=n;i++)
    {
        cin>>y[i];
    }
    for (i=1;i<=k;i++)
    {
        cin>>s[i];
    }
    d=1;
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {
            a[d]=x[i]+y[j];
            d++;
        }
    }
    for (i=1;i<=k;i++)
    {
        kq=0x3c3c;
        for (j=1;j<=d;j++)
        {
            h=abs(a[j]-s[i]);
            kq=min(h,kq);
        }
        cout<<kq<<"\n";

    }
}
