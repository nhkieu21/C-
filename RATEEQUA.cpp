#include<bits/stdc++.h>
using namespace std;
long long a1,n,x1,x2,x3,sum=2,z=10e9;
int main ()
{
    freopen("RATEEQUA.INP","r",stdin);
    freopen("RATEEQUA.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>a1>>n;
    a1=a1%z;
    x1=1;x2=1;
    for (long long i=3;i<=n;i++)
    {
        x3=(x1+x2)%z;
        sum=(sum+x3)%z;
        x1=x2%z;
        x2=x3%z;
    }
    cout<<(sum*a1)%z;

}
