#include <bits/stdc++.h>
using namespace std;
long long i,j,n,dem,kq,t,k,h,a[100001],b[100001],c[100001];
int main ()
{
    //freopen("GRGAME.INP","r",stdin);
    //freopen("GRGAME.OUT","w",stdout);
    cin>>t;
    kq=-0x3c3c3c;
    for (i=1; i<=t; i++)
    {
        cin>>n;
        for (i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for (i=1; i<=n; i++)
        {
            cin>>b[i];
        }
        //i=1;
        dem=1;
        while(dem<=n)
        {
            k=a[1]*100+b[1];
            for (i=2; i<=n; i++)
            {
                h=a[i]*100+b[i];
                k=__gcd(k,h);
            }
            kq=max(kq,k);
            for (j=2; j<=n; j++)
            {
                c[j-1]=b[j];
            }
            c[n]=b[1];
            for (j=1; j<=n; j++)
            {
                b[j]=c[j];
            }
            dem++;
        }
        cout<<kq;
    }

}
