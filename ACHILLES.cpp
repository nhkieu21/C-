#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("ACHILLES.INP","r",stdin);
    freopen("ACHILLES.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    long long a,b,c,d,dem=0;
    cin>>a>>b;
    for (long long i=a;i<=b;i++)
    {
        c=(long long) log10(i);
        c=i/pow(10,c);
        d=i%10;
        if (c==d)
        {
            dem++;
        }
    }
    cout<<dem;

}
