#include<bits/stdc++.h>
using namespace std;
long long i,n,a[10001],d=0;
bool kt (long long n)
{
    for (i=2;i<=n;i++)
    {
        if (a[i]<a[i-1])
        {
            return false;
            d++;
            break;
        }
    }
    if (d==0) {return true;}
}
int main ()
{
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        //s=s+a[i];
    }
    if (kt(n)){cout<<"TRUE";}
    else {cout<<"FALSE";}
}

