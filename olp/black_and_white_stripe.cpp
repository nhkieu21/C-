#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a[n+1];
        a[0]=0;
        for(int i=0; i<n; i++)
        {
            a[i+1]=a[i];
            if(s[i]=='W')
            {
                a[i+1]++;
            }
        }
        int ans=n;
        for(int i=0; i<=n-k; i++)
        {
            ans=min(ans,a[i+k]-a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
