#include<bits/stdc++.h>
using namespace std;

long long n,m,a[100000],x,y,ok[1000][1000],d[1000][1000];

//struct arr{
//    int x,y,z;
//};

//void join()


int main(){
    freopen("SUNWORLD.INP","r",stdin);
    freopen("SUNWORLD.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    cin>>a[i];
    for(int i=0;i<=n-1;i++)
    for(int j=0;j<=n-1;j++)
    {
        d[i][j]=(i==j ? 0 : INT_MAX );
    }
    for(int i=1;i<=n-1;i++)
    {
        cin>>x>>y;
        d[x][y]=1;
        d[y][x]=1;
    }




    if(m==2)
    {
        for(int k=0;k<=n-1;k++)
        for(int i=0;i<=n-1;i++)
        for(int j=0;j<=n-1;j++)
        if(d[i][j]>d[i][k]+d[k][j])
        {
            d[i][j]=d[i][k]+d[k][j];
            d[j][i]=d[i][j];
        }
    }
    cout<<d[a[1]][a[2]];
}
