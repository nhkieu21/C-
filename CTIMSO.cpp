#include<bits/stdc++.h>
using namespace std;
long long i,j,n,m,d,p[100001],t,kq=0x3c3c,c[100001]= {0},dem;
void kt (long long m)
{
    for( i=2; i<=m; i++)
    {
        if(m%i==0)
        {
            d++;
            while(m%i==0)
            {
                m=m/i;
                c[d]++;
            }
            p[d]=i;
        }
    }
}
void in()
{
    for( i=1; i<=d; i++)
    {
        dem=0;
        for( j=p[i]; j<=n; j*=p[i])
            dem+=n/j;
        kq=min(kq,dem/c[i]);
    }
    cout<<kq;
}
int main()
{
    freopen("CTIMSO.INP","r",stdin);
    freopen("CTIMSO.OUT","w",stdout);
    cin>>n>>m;
    d=0;
    kt(m);
    in();
}
