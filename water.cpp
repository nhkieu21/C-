#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001],c[1000001];
int main ()
{
    freopen("WATER.INP","r",stdin);
    freopen("WATER.OUT","w",stdout);
    long long i,j,n,dem=0,h=0,k=0;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        h=h+a[i];
        k=k+b[i];

    }
    k=k-h;
    sort (b+1,b+1+n);
    i=n;
    while (k>0)
    {
        dem++;
        k=k-b[i];
        i--;
    }
    cout<<dem;
}
