#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],b[1001],c[1001];
int main ()
{
    int n,m;
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            cin>>a[i][j];
            if (a[i][j]==1)
            {
                b[j]++;
            }
            c[j]=j;
        }
    }

    while (n>0)
    {
        for (int i=1; i<=m; i++)
        {
            if (b[i]==n) cout<<i<<" ";
        }
        n--;
    }

}
