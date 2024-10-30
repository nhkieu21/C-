#include<bits/stdc++.h>
using namespace std;


int main ()
{
    long long n,i,x;
    float s=0,a=1;
    cin>>n;
    if (n>20)
    {
        n=20;
    }
    for (i=1; i<=n; i++)
    {
        a=a*i;
        s=s+1.0/a;
    }
    cout<<fixed<<setprecision(2);
    cout<<s;
}
