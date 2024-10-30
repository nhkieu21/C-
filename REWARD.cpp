#include<bits/stdc++.h>
using namespace std;
long long x,n,tong=0,a[10000000],f[10000000],dem=0,MAX=-0x3c3c3c;
bool ok[10000000];
int main(){
    freopen("REWARD.INP","r",stdin);
    freopen("REWARD.OUT","w",stdout);
    cin>>n;
    dem=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(ok[x]==false)
        {
            a[++dem]=x;
            ok[x]=true;
        }
        f[x]++;
        tong+=x;
    }
    for(int i=1;i<=dem;i++)
    {
        MAX=max(MAX,tong-(  f[a[i]-1] *(a[i]-1)   )-(    f[a[i]+1] *(a[i]+1)   ) );
        //cout<<tong-(  f[a[i]-1] *(a[i]-1)   )-(    f[a[i]+1] *(a[i]+1)   ) <<" ";
    }
    //cout<<endl;
    cout<<MAX;
}
