#include<bits/stdc++.h>
using namespace std;
int a[100001],x[100001],d[100001];
int main ()
{
    freopen("DOLLS.INP","r",stdin);
    freopen("DOLLS.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k,tam,i,kq,dem,h,t;
    cin>>n>>k;
//    kq=0;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        x[i]=1;
    }
    sort (a+1,a+1+n, greater<int> ());
    dem=1;
    kq=0;
    t=a[dem];
    while (dem<=n)
    {
        kq=kq+a[dem];
        for (i=dem+1;i<=n;i++)
        {
            if (a[i]<=t-k && a[i]!=0)
            {
                t=a[i];
                a[i]=0;
            }
        }
        dem++;
        while (a[dem]==0)
        {
            dem++;
        }

        t=a[dem];
        //cout<<kq<<" ";
    }


    cout<<kq;
}
