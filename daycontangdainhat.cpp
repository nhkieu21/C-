#include<bits/stdc++.h>
using namespace std;
int res=0,a[1001],d[1001],i,n,j;
int main ()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (i=1;i<=n;i++)
    {
        d[i]=1;
        for (j=1;j<i;j++)
        {
            if (a[i]>a[j])
            {
                d[i]=max(d[i],d[j]+1);
            }
        }
        res=max(res,d[i]);
    }
    cout<<res;
}
