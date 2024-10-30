#include<bits/stdc++.h>
using namespace std;
long long i,n,k,m,a,b,d,h,j;
long long kt (long long n,long long k)
{
    i=2;
    while (i<=k)
    {
        if (n%i==0)
        {
            n=n/i;
        } else {i++;}
    }
    return n;
}
int main()
{
    freopen("NHANTU.INP","r",stdin);
    freopen("NHANTU.OUT","w",stdout);
    cin>>m>>a>>b;
    d=0;
    for (j=a;j<=b;j++)
    {
        k=j;
        if (kt(k,m)==1)
        {

            d++;
        }
    }
    cout<<d;
}

