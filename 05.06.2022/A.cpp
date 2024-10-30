#include<bits/stdc++.h>
using namespace std;
long long n,a,b,k,i;
int main ()
{
    cin>>n;
    k=4;
    a=3;
    b=1;
    for (i=2;i<=n;i++)
    {
        k=(k*4)%1000000007;
        a=(3*a+b)%1000000007;
        b=k-a;
        //cout<<a<<" "<<b<<"\n";
    }
    /*n=n%1000000007;
    a=n;
    b=2*n+1;
    b=b%1000000007;
    k=(a*b)%1000000007;*/

    cout<<a;
}
