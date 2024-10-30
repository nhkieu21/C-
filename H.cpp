#include<bits/stdc++.h>
using namespace std;
long long a[10001],kq,h;
void ucln (long long n)
{
    kq=a[1];
    for (h=2;h<=n;h++)
    {
        kq=__gcd(kq,a[h]);
    }
    cout<<kq*n<<"\n";
}
int main ()
{
    long long t,i,n,j;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>n;
        for (j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        ucln(n);
    }
}
