#include<bits/stdc++.h>
using namespace std;
long long n,i,j,t,a[100001],x[10001][10001],y[10001][10001];
int main()
{
    freopen("GAMEC.INP", "r", stdin);
    freopen("GAMEC.OUT", "w", stdout);
    cin>>n;
    for (i=2; i<=n; i++)
    {
        cin>>a[i];
    }
    for (i=1; i<=n-1; i++)
    {
        j=1;
        x[i][1]=1;
        y[i][1]=0;

        while ((x[i][j]>0)&&(x[i][j]<=n))
        {
            j++;
            x[i][j]=x[i][j-1]+i;
            y[i][j]=y[i][j-1]+i;
            j++;
            x[i][j]=x[i][j-1]-a[i+1];
            y[i][j]=y[i][j-1]+a[i+1];

        }
        cout<<y[i][j]<<"\n";
    }


}
