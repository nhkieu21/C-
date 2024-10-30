#include <bits/stdc++.h>
using namespace std;
int kt(long long n)
{
    long long i,d=0;
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            d++;
        }
    }
    if (d==0)
    {
        return 0;
    }
    else return 1;
}
int main()
{
    long long a,s=0;
    while (cin>>a)
    {
        if (kt(a)==0)
        {
            cout<<s;
            break;
        }
        if (a%2==0)
        {
            s=s+a;
        }
    }
}
