#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d=0,s=0;
    cin>>n;
    while (n>0)
    {
        s=s+n%10;
        d++;
        n=n/10;
    }
    cout<<d<<" "<<s;
}
