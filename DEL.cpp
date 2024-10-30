#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
int main ()
{
    long long n,i,s=0,c=0,l=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]%2==0)
        {
            c++;
        } else {l++;}
        s=s+a[i];
    }
    if (s%2==0)
    {
        cout<<c*(c-1)/2 + l*(l-1)/2;
    } else {cout<<c*l;}
}
