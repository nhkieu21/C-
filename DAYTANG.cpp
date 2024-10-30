#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001];
int main ()
{
    long long n,i;
    cin>>n;
    b[1]=1;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for (i=2;i<=n;i++)
    {
        if (a[i]>=a[i-1])
        {
            b[i]=b[i-1]+1;
        } else {b[i]=1;}
    }
    cout<<*max_element(b+1,b+1+n);
}
