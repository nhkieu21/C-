#include<bits/stdc++.h>
using namespace std;
int n,a[50001],b[50001];
int main ()
{
        freopen("SHOWTV.INP","r",stdin);
    freopen("SHOWTV.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    int tam=0;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }

    for (int i=1;i<=n-1;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[j]<a[i])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
    }

    for (int i=1;i<n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[j]<b[i])
            {
                tam++;
            }
        }
    }
    cout<<tam;
}
