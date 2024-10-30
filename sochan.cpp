#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a[5],i,dem=0;
    cin>>a[1]>>a[2]>>a[3]>>a[4];
    for (i=1;i<=4;i++)
    {
        if (a[i]%2==0)
        {
            dem++;
        }
    }
    cout<<dem;
}
