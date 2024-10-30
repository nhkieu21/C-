#include<bits/stdc++.h>
using namespace std;
long long tong (long long n)
{
    long long d=0;
    while (n>0)
    {
        d=d+n%10;
        n=n/10;
    }
    return d;
}
int main ()
{
    long long n;
    cin>>n;
    if (n%tong(n)==0)
    {
        cout<<1;
    } else {cout<<0;}
}
