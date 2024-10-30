#include<bits/stdc++.h>
using namespace std;
long long t,n,d,a[10000000],f[100000000],ans;
int main(){
    freopen("DIVSEQ.INP","r",stdin);
    freopen("DIVSEQ.OUT","w",stdout);
    cin>>t;
    while(t--)
    {
    cin>>d>>n;

    f[0]=0;

    ans=0;

    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            f[i]=f[i-1]+a[i];
            //cout<<f[i]<<" ";
        }
//    for(int i=1;i<=n;i++)
//        cout<<f[i]<<" ";
//        cout<<endl;
    for(int i=1;i<=n;i++)
    for(int j=i;j<=n;j++)
        {
            if( (f[j]-f[i-1])%d==0 )
                ans++;
        }
        cout<<ans<<"\n";
    }
}
