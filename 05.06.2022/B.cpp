#include<bits/stdc++.h>
using namespace std;
long long n,k,i,d=0,dem=0;
long long a[200001];
int main ()
{
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]==1)
        {
            d=i;
        }
    }
    dem=d-1;
    if (d==0) {cout<<-1;}
    else
    {
        for (i=d+1;i<=n;i++)
        {
            if (a[i]!=a[d]+1)
            {
                dem++;
            } else {d=i;}
        }
        cout<<dem;
    }

}
