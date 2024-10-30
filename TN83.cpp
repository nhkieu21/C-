#include <bits/stdc++.h>
using namespace std;
long long n,i,a[100001],kq,m,t,j,h;
bool giam (long long a, long long b)
{
    return a>b;
}
int main ()
{
    freopen("TN83.INP","r",stdin);
    freopen("TN83.OUT","w",stdout);
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    m=0;kq=0;
    sort(a+1,a+1+n,giam);
    for (i=n;i>=1;i--)
    {
        t=a[i]+n;
        for (j=i-1;j>=1;j--)
        {
            h=a[j]+j;
            m=max(m,h);
        }
        if (t>=m) {kq++;}
        //cout<<a[i];
    }
    cout<<kq;

    /*for (i=2;i<=n;i++)
    {
        if (a[i]==a[1])
        {
            kq++;
        }
    }
    sort(a+1,a+1+n,giam);
    kq=1;
    for (i=2;i<=n;i++)
    {
        if (a[i]==a[1])
        {
            kq++;
        }
    }
    cout<<kq;*/

}
