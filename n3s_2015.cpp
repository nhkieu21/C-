#include<bits/stdc++.h>
using namespace std;
long long chinhphuong (long long k)
{
    long long i,h,t=0;
    for (i=1;i<=k*k;i++)
    {
        h=i*i;
        if ((h-1)%3==0)
        {
            t++;
            if (t==k)
            {
                return h-1;
                break;
            }
        }
    }
}
int main ()
{
    freopen("N3S.INP","r",stdin);
    freopen("N3S.OUT","w",stdout);
    long long i,t,k,m;
    cin>>t;
    for (i=1;i<=t;i++)
    {
        cin>>k>>m;
        cout<<chinhphuong(k)%m<<"\n";
    }
}
