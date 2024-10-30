#include<bits/stdc++.h>
using namespace std;


int main ()
{
    long long n,i,x;
    float s=1,a=1,b=1;
    cin>>x>>n;

    for (i=1; i<=n; i++)
    {
        a=-a*x;
        b=b*i;
        s=s+(float)a/b;
    }
    cout<<fixed<<setprecision(2);
    cout<<s;
}
