#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001],c[1000001];
int main ()
{
    long long n,i,dem1=0,dem2=0,kq=1,t=10e9+7;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        if (a[i]>0)
        {
            dem1++;
            b[dem1]=a[i];
        }
        else if (a[i]<0)
        {
            dem2++;
            c[dem2]=a[i];
        }
    }
    sort (b+1,b+1+dem1);
    sort (c+1,c+1+dem2);
    if (c[dem2]==0)
    {
        dem2--;
    }
    else if (c[dem2]%2==1)
    {
        dem2--;
    }
    for (i=1; i<=dem1; i++)
    {
        kq=(kq%t)*(b[i]%t);
    }
    //cout<<"\n";
    for (i=1; i<=dem2; i++)
    {
        kq=(kq%t)*(c[i]%t);
    }
    kq=kq%t;
    cout<<kq;
}
