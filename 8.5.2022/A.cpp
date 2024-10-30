#include<bits/stdc++.h>
using namespace std;

bool nto (long long n)
{
    long long i;
    if (n<2)
    {
        return false;
    }
    if (n==2)
    {
        return true;
    }
    else
    {
        for (i=2; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                return false;
                break;
            }
        }
        return true;
    }
}
long long daonguoc(long long n)
{
    long long k,tam;
    k=n%10;
    n=n/10;
    while (n>0)
    {
        tam=n%10;

        n=n/10;
        k=k*10+tam;
    }
    return k;
}
int main ()
{
    long long t,i,n;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>n;
        if (nto(daonguoc(n))) {cout<<"Yes\n";} else {cout<<"No\n";}
    }
}
