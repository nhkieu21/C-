#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
int main ()
{
    long long n,i,kq=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]<0)
        {
            kq=kq+a[i]*a[i];
        }
    }
    cout<<kq;
}

