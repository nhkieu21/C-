#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("QUANTOT.INP","r",stdin);
    freopen("QUANTOT.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int n,a,b,i,j;
    cin>>n>>a>>b;
    i=0;
    j=n/max(a,b);
    bool t=true;
    while (i<=n || j>=0)
    {
        if (a>b)
        {
            long long tam=a*j+b*i;
            if (tam==n)
            {
                cout<<i+j;
                t=false;
                break;
            }
            else if (tam>n)
            {
                j--;
            } else {i++;}
        } else
        {
            long long tam=b*j+a*i;
            if (tam==n)
            {
                cout<<i+j;
                t=false;
                break;
            }
            else if (tam>n)
            {
                j--;
            } else {i++;}
        }
    }
    if (t) {cout<<-1;}
}
