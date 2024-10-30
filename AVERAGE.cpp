#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
int main ()
{
    long long n,i,d=0;
    double s=0;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        if (a[i]%2==0)
        {
            s=s+a[i];
            d++;
        }
    }
    if (d!=0)
    {
        s=s/d;
        cout<<fixed<<setprecision(2);
        cout<<s;
    } else {cout<<0.00;}

}

