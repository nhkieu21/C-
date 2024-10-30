#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,s=0;
    cin>>n;
    for (i=1;i<=n/2;i++)
    {
        if (n%i==0)
        {s=s+i;}
    }
    if (s==n)
    {
        cout<<"TRUE";
    } else {cout<<"FALSE";}
}
