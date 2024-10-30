#include<bits/stdc++.h>
using namespace std;
long long a[1000001],dem=0;
int main ()
{
    freopen("MAXSUM.INP","r",stdin);
    freopen("MAXSUM.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int n,imax=0,j,k;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]>=dem)
        {
            dem=a[i];
            imax=i;
        }
    }

    a[n+1]=a[n]+1;
    j=imax+1;
    k=n;
    while (k!=j)
    {
        a[j]=min(a[j],a[j-1]);
        a[k]=min(a[k],a[k+1]);
        if (j==k-1) break;
        else if (a[j]>=a[k])
        {
            j++;
        } else {k--;}

    }

    cout<<dem-a[j]*2-a[k];

}
