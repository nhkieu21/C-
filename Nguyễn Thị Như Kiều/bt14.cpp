#include<bits/stdc++.h>
using namespace std;
int Demso(long long n)
{
    long long d=0;
    while (n>0)
    {
        d++;
        n/=10;
    }
    cout<<d;
}
int main()
{
    long long n;
    cin>>n;
    Demso(n);
}
