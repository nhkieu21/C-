#include<bits/stdc++.h>
using namespace std;
long long a[100001],b[100001],t[100001];
int main ()
{
        freopen("OLYMPIC.INP","r",stdin);
    freopen("OLYMPIC.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    long long n,c,i,kq=0;
    cin>>n>>c;
    for (i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        t[i]=1;
    }
    i=1;
    while (i<=n)
    {
        if (c>=a[i]&&t[i]==1)
        {
            c=c+b[i];
            t[i]=0;
            kq++;
            i=1;
        } else {i++;}
    }
    cout<<kq;
}
