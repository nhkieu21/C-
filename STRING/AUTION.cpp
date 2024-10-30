#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool nto (long long n)
{
    long long i,d=0;
    //if (n=2) {return true;}
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            d++;
            return false;
        }
    }
    if (d==0)
    {
        return true;
    }

}
bool Doixung(long long n)
{
    long long d=0,h=n;

    while (n>0)
    {
        d*=10;
        d+=n%10;
        n/=10;
    }
    if (d==h)
    {
        return true;
    } else {return false;}
}

int main ()
{
    long long a,b,d=0,i;
    cin>>a>>b;
    for (i=a;i<=b;i++)
    {
        if ((nto(i)) && (Doixung(i)))
        {
            d++;
        }
    }
    cout<<d;
}
