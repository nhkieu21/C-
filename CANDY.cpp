#include <bits/stdc++.h>
using namespace std;
long long n,i,j,s,h,x,t,a[1000001];
int main()
{
    freopen("CANDY.INP","r",stdin);
    freopen("CANDY.OUT","w",stdout);
    cin>>t;
    for (i=1;i<=t;i++)
    {
        cin>>n>>x;
        s=x;
        for (j=1;j<=n;j++)
        {
            cin>>a[j];
            s=s+a[j];
        }
        h=s/(n+1);
        if (s!=(n+1)*h)
        {
            cout<<"NO"<<"\n";
        } else
        {
            s-=x;
            if (x<s/n){cout<<"NO"<<"\n";}
            else {cout<<"YES"<<"\n";}
        }
    }
}


