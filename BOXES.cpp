#include<bits/stdc++.h>
using namespace std;
int a[20][20],ans=0,b[100000],f[10],n,k,r=0;
void dondong()
{
    int don=0,m;
    for(int i=1; i<=n-k; i++)
    {
        if(i==n-k)
        {
            if(a[f[i]][f[i+1]]<a[f[i+1]][f[i]])
                m=a[f[i]][f[i+1]];
            else if(a[f[i]][f[i+1]]>a[f[i+1]][f[i]])
                m=a[f[i+1]][f[i]];
            else
                m=a[f[i+1]][f[i]];
            don+=m;
        }
        else
            don+=a[f[i]][f[i+1]];
    }
    r++;
    if(r==1)ans=don;
    else ans=min(ans,don);
}
void hoanvi(int i)
{
    if(i>n)
        dondong();
    for(int j=1; j<=n; j++)
        if(b[j]==0)
        {
            b[j]=1;
            f[i]=j;
            hoanvi(i+1);
            b[j]=0;
        }
}
int main()
{
    freopen("BOXES.INP","r",stdin);
    freopen("BOXES.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    hoanvi(1);
    cout<<ans;
}
