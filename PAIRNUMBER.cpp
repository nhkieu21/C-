#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("PAIRNUMBER.INP","r",stdin);
    freopen("PAIRNUMBER.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int n,dem=0,a[100001];
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[i]<a[j])
            {
                dem++;
            }
        }
    }
    cout<<dem;
}
