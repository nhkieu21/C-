#include<bits/stdc++.h>
using namespace std;
long long a[100001],b[100001],t[100001];
int main ()
{
//    freopen("BOCSOIF.INP","r",stdin);
//    freopen("BOCSOIF.OUT","w",stdout);
    long long n,i,j,dem;
    cin>>n;
    dem=0;
    for (i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (a[j]==b[i])
            {
                dem++;
                t[dem]=i;

            }
        }
    }
    cout<<dem<<"\n";
    for (i=1;i<=dem;i++)
    {
        cout<<t[i]<<"\n";
    }
}
