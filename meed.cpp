#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("MEED.INP","r",stdin);
    freopen("MEED.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int m,n,k;
    cin>>m>>n>>k;
    if (m%n==0)
    {
        cout<<0;
    } else
    {
        bool t=true;
        for (int i=1;i<=n;i++)
        {
            long long tam=k*i+m;
            if (tam%n==0)
            {
                cout<<i;
                t=false;
                break;
            }
        }
        if (t) {cout<<-1;}
    }

}
