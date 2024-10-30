
#include <bits/stdc++.h>
using namespace std;
long long n,i,j,h,t,kq,dem,du,tg,a;
//int base,f[9000001],n;
long long nto(long long n)
{
   for (i=2;i<=sqrt(n);i++)
   {
       if (n%i==0)
       {
           return 0;break;
       }
   }
   return 1;
}

long long duyet (long long n)
{
    h=n;
    du=n%10;
    du=pow(2,du);
    tg=n/10;
    kq=1;
    for (i=1;i<=tg;i++)
    {
        n=pow(2,10);
        n=n%h;
        kq=kq*n;
        kq=kq%h;
    }
    kq=kq*du;
    kq=kq%h;
    return kq;
    //return n%h;
}

int main()
{
    freopen("PSEPRIME.INP","r",stdin);
    freopen("PSEPRIME.OUT","w",stdout);
    cin>>t;
    dem=0;
    //cout<<duyet(t);
    for (a=1;a<=t;a++)
    {
        if ((duyet(a)==2)&&(nto(a)==0))
        {
            cout<<a<<"\n";
            dem++;
        }
        //i++;
    }
    //cout<<dem;
    if (dem==0) {cout<<0;}
    //cout<<nt (n);*/
}



