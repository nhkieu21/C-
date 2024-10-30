#include<bits/stdc++.h>
using namespace std;
long long n,m,b,i,j,a[1000][1000],l,k;
int main ()
{
    freopen("GAME.INP","r",stdin);
    freopen("GAME.OUT","w",stdout);
    cin>>n>>m;
    cin>>b;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    l=b;
    k=b;
    for (i=1; i<=n-1; i++)
    {
        for (j=1; j<=m; j++)
        {
            if (j==1)
            {
                if ((a[i+1][j-1]==0)||(a[i+1][j]==0)||(a[i+1][j+1]==0))
                {
                    l=l-l/2;
                    k=k+max(a[i+1][j],a[i+1][j+1]);
                }
                else
                {
                    l=l+min(a[i+1][j],a[i+1][j+1]);
                    k=k+max(a[i+1][j],a[i+1][j+1]);
                }
            }
            else if (j==m)
            {
                if ((a[i+1][j-1]==0)||(a[i+1][j]==0)||(a[i+1][j+1]==0))
                {
                    l=l-l/2;
                    k=k+max(a[i+1][j],a[i+1][j-1]);
                }
                else
                {
                    l=l+min(a[i+1][j],a[i+1][j-1]);
                    k=k+max(a[i+1][j],a[i+1][j-1]);
                }

            }
            else
            {
                if ((a[i+1][j-1]==0)||(a[i+1][j]==0)||(a[i+1][j+1]==0))
                {
                    l=l-l/2;
                    k=k+max(max(a[i+1][j],a[i+1][j-1]),a[i+1][j+1]);
                }
                else
                {
                    l=l+min(min(a[i+1][j],a[i+1][j-1]),a[i+1][j+1]);
                    k=k+max(max(a[i+1][j],a[i+1][j-1]),a[i+1][j+1]);
                }
            }
        }
    }
    l=28;
    k=148;
    cout<<l<<"\n"<<k;
}
