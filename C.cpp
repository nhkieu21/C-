#include<bits/stdc++.h>
using namespace std;
long long b[10001],j,n,dem,i;
void kt (long long n,long long t)
{
    sort (b+1,b+1+n);
    dem=n;
    for (j=n; j>=1; j--)
    {
        if (t>=b[j])
        {
            t=t-b[j];
            dem--;
            //cout<<dem<<"\n";
        }
        if (t==0)
        {
            cout<<dem;
            break;
        }
    }
    //if (t==0) {return dem;}
}

int main ()
{
    long long n,k,a[10001],t=0;
    cin>>n>>k;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i]%k;
        t=(t+a[i])%k;

    }
    kt(n,t);
    //cout<<t;
}

