#include<bits/stdc++.h>
using namespace std;
int n,a[1000001];
int main ()
{
    freopen("HIGHWAY.INP","r",stdin);
    freopen("HIGHWAY.OUT","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort (a+1,a+1+n);
    for (int i=1;i<n;i++)
    {
        a[i]=a[i+1]-a[i];
    }
    cout<<*min_element(a+1,a+1+n);
}
