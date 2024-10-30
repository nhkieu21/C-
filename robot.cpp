#include<bits/stdc++.h>
using namespace std;
int n,a[10001],b[10001];
int main ()
{
        freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    int dem=0;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (int i=2; i<n; i++)
    {
        if (abs(a[i]-a[i-1])==1 || abs(b[i]-b[i-1])==1)
        {
        if (a[i]==a[i-1])
        {
            if (b[i]>b[i-1])
            {
                if (a[i+1]>a[i])
                {
                    dem++;

                }
            }
            else
            {
                if (a[i+1]<a[i])
                {
                    dem++;
                }
            }
        }
        else if (b[i]==b[i-1])
        {
            if (a[i]>a[i-1])
            {
                if (b[i+1]<b[i])
                {
                    dem++;
                }
            }
            else
            {
                if (b[i+1]>b[i])
                {
                    dem++;
                }
            }
        }
        }
    }
    cout<<dem;
}
