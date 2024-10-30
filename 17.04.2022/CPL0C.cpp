#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001],tam[10001][10001],dem[1000001];
int main ()
{
    long long n,k,i,j,x,y,cong=0,tru=0;
    cin>>n>>k;
    for (i=1;i<=k;i++)
    {
        cin>>a[i]>>b[i];
        x=a[i];y=b[i];
        tam[x][y]=1;
    }
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (tam[i][j]==1)
            {
                dem[i]=1;
                dem[j]++;
            }
        }
    }
    for (i=1;i<=n;i++)
    {
        if (dem[i]==0)
        {
            tru++;
        }
        if (dem[i]>1)
        {
            cong++;
        }
    }
    if (tru!=0) {cout<<"+"<<tru;} else {cout<<-cong;}
}
