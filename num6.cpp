#include<bits/stdc++.h>
using namespace std;
int a[10001];
int main ()
{
    freopen("NUM6.INP","r",stdin);
    freopen("NUM6.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int n,i,sum=0,d=0,dem=0;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        if (a[i]>0)
        {
            d++;
        }
        if (a[i]==0) {dem++;}
    }
    sort(a+1,a+1+n,greater<int>() );
    if (d>=6 || d<3)
    {
        sum=a[1]*a[2]*a[3]+a[4]*a[5]*a[6];
    }
    else if (d==3)
    {

        if (a[1]*a[2]*a[3]>=a[1]*a[n]*a[n-1])
        {
            sum=a[1]*a[2]*a[3]+a[4]*a[n]*a[n-1];
        }
        else
        {
            sum=a[1]*a[2]*a[3]+a[4]*a[5]*a[6];
        }
    }
    else if (d==4 || d==5)
    {
        if (a[1]*a[2]*a[3]>=a[1]*a[n]*a[n-1])
        {
            sum=a[1]*a[2]*a[3]+a[4]*a[n]*a[n-1];
        }
        else
        {
            sum=a[1]*a[n]*a[n-1]+a[2]*a[3]*a[4];
        }
    }
    cout<<sum;
}
