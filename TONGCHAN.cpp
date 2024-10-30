#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],i,s;
    cin>>n;
    s=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]%2==0)
        {
            s=s+a[i];
        }
    }
    cout<<s;
}
