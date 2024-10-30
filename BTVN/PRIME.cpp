#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,d=0;
    cin>>n;
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            cout<<"FALSE";
            d++;
            break;
        }
    }
    if (d==0)
    {
        cout<<"TRUE";
    }
}
