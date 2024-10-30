#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001];
int main ()
{
    long long l,r,q,n,i,j,t,dem;
    cin>>n>>q;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (i=1;i<=q;i++)
    {
        dem=0;
        cin>>l>>r;
        for (j=l;j<=r;j++)
        {
            b[j]=a[j];
        }
        t=*max_element(b+l,b+r+1);
        for (j=0;j<=t;j++)
        {
//            cout<<count(b+l,b+r+1,j)<<" ";
            if (count(b+l,b+r+1,j)==2)
            {
                dem++;
            }
        }
        cout<<dem<<"\n";
    }
}
