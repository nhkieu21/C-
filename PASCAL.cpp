#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],b[1001][1001],c[1001][1001];
int main ()
{
    freopen("PASCAL.INP","r",stdin);
    freopen("PASCAL.OUT","w",stdout);
    ios::sync_with_stdio(0);cin.tie(0);

    cin>>n;
    for (int i=1; i<=n+1; i++)
    {
        for (int j=1; j<=i; j++)
        {
            if (j==1 || j==i) {a[i][j]=1;}
            else {a[i][j]=a[i-1][j-1]+a[i-1][j];}
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
