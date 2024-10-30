#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("KEY.INP","r",stdin);
    freopen("KEY.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int n,kq=0,a[1001],t;
    cin>>n;
    string s;
    cin>>s;
    for (int i=1; i<=n; i++)
    {
        a[i]=s[i-1]-48;
    }
    string s1;
    cin>>s1;
    for (int i=1; i<=n; i++)
    {
        t=s1[i-1]-48;
        if (t-a[i]<0 )
        {
            if (a[i]-t<5)
            {kq=kq+a[i]-t;} else {kq=kq+10+t-a[i];}
        }
        else if (t-a[i]>5)
        {
            kq=kq+10+a[i]-t;
        }
        else
        {
            kq=kq+t-a[i];
        }
    }
    cout<<kq;
}
