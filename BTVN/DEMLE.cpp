#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,dem;
    dem=0;
    while (cin>>a)
    {
        if (a==0)
        {
            cout<<dem;
            break;
        }
        if (a%2==1)
        {
            dem++;
        }
    }
}
