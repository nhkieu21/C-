#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
int main ()
{
    long long i,n,kq=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]%2==0)
        {
            kq++;
        }
    }
    cout<<kq;
}
