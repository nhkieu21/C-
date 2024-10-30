#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
void kt (long long n)
{
    long long i,sum=a[1],d=0;
    for (i=2;i<=n;i++)
    {
        if (a[i]<sum)
        {
            cout<<"FALSE";
            d++;
            break;
        } else {sum=sum+a[i];}
    }
    if (d==0) {cout<<"TRUE";}
}
int main ()
{
    long long n,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    kt(n);
}
