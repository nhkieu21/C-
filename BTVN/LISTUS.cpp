#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    for (i=1;i<=n/2;i++)
    {
        if (n%i==0)
        {cout<<i<<" ";}
    }
    cout<<n;
}
