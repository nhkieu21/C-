#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool specnum (long long n)
{
    long long d1=0,d2=0;
    while (n>0)
    {
        if ((n%10)%2==0)
        {
            d1=d1+n%10;
            n=n/10;
        } else
        {
            d2=d2+n%10;
            n=n/10;
        }
    }
    if (d1==d2)
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
        if (specnum(i))
        {
            d++;
        }
    }
    cout<<d;
}
