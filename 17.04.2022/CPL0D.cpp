#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001];
int main ()
{
    long long w,n,k,i,j,t;
    cin>>w>>n>>k;
    for (i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (i=1; i<=n-1; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            if (a[i]>a[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
            else
            {
                if (a[i]==a[j])
                    {
                        if (b[i]<b[j])
                        {
                            swap(b[i],b[j]);
                        }
                    }
            }
        }
    }
    t=0;
    i=1;
    while (w>0)
    {
        if (w>a[i])
        {
            t=t+b[i];
            i++;
            w=w-a[i];
        } else {w=0;}
    }
    cout<<t;
}
