#include<bits/stdc++.h>
using namespace std;
int m,n,kq,a[1000001];
int main ()
{
    freopen("SMAXLINE.INP","r",stdin);
    freopen("SMAXLINE.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);

    cin>>m>>n;
    kq=0;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        kq=kq+*max_element(a+1,a+1+n);
    }
    cout<<kq;
}
