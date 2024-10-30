#include <bits/stdc++.h>
using namespace std;
long long s,n,k,i,h,d[1000001];
long long gt(long long n,long long k)
{
    s=1;
    for (i=1;i<=k;i++,n--)
    {
        s=s*n/i;
    }
    return s;
}
int main()
{

    freopen("LTHI.INP","r",stdin);
    freopen("LTHI.OUT","w",stdout);
    cin>>n>>k;
    long long m=1000000007;
    d[0]=0;
    d[1]=n-1-k;
    //h=gt(n,k);
    if (n<=10)
    {h=gt(n,k);cout<<h%m;}
    else {if ((n>10)&&(n<=100000))
        {
            h=gt(n,k);
            for (i=2;i<=n-k;i++)
            {
                d[i]=(i-1)*(d[i-1]+d[i-2]);
            }}
            h=h%m;
            d[n-k]%=m;
            cout<<d[n-k]*h%m;
        }
    //for (i=3;i<=)
}


