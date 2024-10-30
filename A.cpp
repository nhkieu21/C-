#include<bits/stdc++.h>
using namespace std;
bool nto(long long n)
{
    long long i,d=0;
    if (n<2)
    {
        return false;
    }else if (n==2)
    {
        return true;
    }
    else
    {
        for (i=2; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                return false ;
                d++;
                break;
            }
        }
    }
    if (d==0)
    {
        return true;
    }
}
bool doixung (long long n)
{
    long long d=0,h=n;
    while (n>0)
    {
        d=d*10+n%10;
        n=n/10;
    }
    if (h==d)
    {
        return true;
    }
    else
    {
        return false;
    }
}
long long kt (long long a, long long b)
{
    long long dem=0,i;
    for (i=a; i<=b; i++)
    {
        if (nto(i) && doixung(i))
        {
            dem++;
        }
    }
    cout<<dem<<"\n";
}
int main ()
{
    long long t,i,a,b;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>a>>b;
        kt(a,b);
    }
}
