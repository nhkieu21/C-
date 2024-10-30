#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001];
int main ()
{
    freopen("PICNIC.INP","r",stdin);
    freopen("PICNIC.OUT","w",stdout);
    long long n,i,j,dem,t=0;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    dem=b[4];
    if (b[1]>b[3])
    {
        dem=dem+b[3];
        b[1]-=b[3];
        t=b[1];
    }
    else
    {
        dem=dem+b[1];
        b[3]-=b[1];
        t=b[3];
    }
    if (b[2]%2==0)
    {
        dem=dem+b[2]/2;
    } else {b[2]++;dem=dem+b[2]/2;t=t+2;}
    if (t%4==0) {dem=dem+t/4;} else {dem=dem+t/4+1;}
    cout<<dem;
}
