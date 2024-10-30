#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],b[1000001],d=0,i;
long long kt (long long n)
{
    d=0;
    for (i=1;i<=n;i++)
    {
        if (b[a[i]]%2!=0)
        {
            d++;
        }
    }
    if (n%2==1)
    {
        d--;
    }
    if (d==0) {cout<<"TRUE";} else {cout<<"FALSE";}
}
int main ()
{

    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    kt(n);
}
