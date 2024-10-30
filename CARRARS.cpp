#include<bits/stdc++.h>
using namespace std;
long long a[100001],n,k,h,dem,m;
void output()
{
    h=k;
    for(long long i=2; i<=n; i++)
    {
        if (a[i]!=a[i-1])
        {
            h--;
        }
    }
    if (h>0)
        {
            dem++;
        }
}
void tim(long long i)
{
    for(long long j=1; j<=m; j++)
    {
        a[i]=j;
        if(i==n)
            output();
        else
            tim(i+1);
    }
}
int main ()
{
    freopen("CARRARS.INP","r",stdin);
    freopen("CARRARS.OUT","w",stdout);

    cin>>n>>m>>k;
    //k--;
    tim(1);
    cout<<dem;
}

