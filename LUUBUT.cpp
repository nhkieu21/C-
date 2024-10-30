#include<bits/stdc++.h>
using namespace std;
long long a[1000001];

int main ()
{
    long long n,i,kq=1;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for (i=2;i<=n;i++)
    {
        if (a[i]!=a[i-1])
        {
            kq++;
        }
    }
    cout<<kq;
}
