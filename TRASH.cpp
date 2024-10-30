#include<bits/stdc++.h>
using namespace std;
int kq,n,t,a[1000001],b[1000001],tam;
int main ()
{
    freopen("TRASH.INP","r",stdin);
    freopen("TRASH.OUT","w",stdout);
    cin>>n>>t;
    b[0]=0,kq=0,tam=0;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        if (tam+a[i]<=t)
        {
            b[i]=b[i-1]+1;
            tam=tam+a[i];
        } else if (a[i]<=t)
        {
            b[i]=1;
            kq=kq+b[i-1]*(b[i-1]+1)/2;
            tam=a[i];
        } else b[i]=0;
    }

    kq=kq+b[n]*(b[n]+1)/2;
    cout<<kq;
}
