#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    if (n%4096==0)
    {
        cout<<n/1024;
    } else {cout<<(n/4096)*4+4;}

}

