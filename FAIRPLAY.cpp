#include<bits/stdc++.h>
using namespace std;
int n,a[100001],b[100001],kq=0;
int main ()
{
    freopen("FAIRPLAY.INP","r",stdin);
    freopen("FAIRPLAY.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);

        cin>>n;
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for (int i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        sort(a+1,a+1+n);
        sort(b+1,b+1+n);

        int i=1,j=1;
        while (i<=n && j<=n)
        {
            if (a[i]<b[j]) {kq++;i++;j++;}
            else  {j++;}
        }
        cout<<kq;
}
