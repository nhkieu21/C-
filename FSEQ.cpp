#include<bits/stdc++.h>
using namespace std;
long long a[30001];
int main ()
{
    long long n,kq=2,t=2,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (i=3;i<=n;i++)
    {
        if (a[i]==(a[i-1]+a[i-2]))
        {
            t++;
        } else {kq=max(kq,t);}
    }
    if (kq>2) {cout<<kq;}
        else {cout<<-1;}
}
