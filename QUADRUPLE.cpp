#include<bits/stdc++.h>
using namespace std;
long long n,i,j,k,tam,d,a[10001],p;
int main()
{
    freopen("QUADRUPLE.INP","r",stdin);
    freopen("QUADRUPLE.OUT","w",stdout);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    d=0;
    for(i=1; i<=n-3; i++)
    {
        for(j=i+1; j<=n-2; j++)
        {
            for(k=j+1; k<=n-1; k++)
            {
                for(p=k+1; p<=n; p++)
                {
                    tam=a[j]-a[i];
                    if(a[p]-a[k]==tam) d++;
                }
            }
        }
    }
    cout<<d;
}
