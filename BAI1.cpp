#include <bits/stdc++.h>
using namespace std;
int main ()
{
    //freopen("BAI1.INP","r",stdin);
    //freopen("BAI1.OUT","w",stdout);
    long long n,m,i,j,t,kq,a[100001],b[100001],c[100001];
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for (i=1; i<=m; i++)
    {
        cin>>b[i]>>c[i];
    }
    for(i=1; i<m; i++)
        for(j=i; j<=m; j++)
        {
            if(c[i]>=c[j])
            {
                swap(c[i],c[j]);
                swap(b[i],b[j]);
            }
        }
    i=1;
    j=1;
    t=0;
    while(i<=n)
    {
        if(b[j]>=a[i])
        {
            t=t+c[j];
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<t;
}

