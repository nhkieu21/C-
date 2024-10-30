#include<bits/stdc++.h>

using namespace std;
int main ()
{
    freopen("BOCSOIF.INP","r",stdin);
    freopen("BOCSOIF.OUT","w",stdout);
    long long n,m,dem;
    cin>>n>>m;
    dem=0;
    if (n<m)
    {
        while (n!=1)
        {
            n=n-n/2;
            dem++;
        }
        while (m!=1)
        {
            m=m-m/2;
            dem++;
        }
    } else
    {
        while (m!=1)
        {
            m=m-m/2;
            dem++;
        }
        while (n!=1)
        {
            n=n-n/2;
            dem++;
        }
    }
    cout<<dem%2;
}
