#include<bits/stdc++.h>
using namespace std;
bool kt (long long n)
{
    long long t=n,d=0,chuso,k;
    chuso=(int)log10(n)+1;
    if (n==0)
    {
        return true;
    }
    else
    {
        while (n>0)
        {
            k=n%10;
            d=d+pow(k,chuso);
            n=n/10;
        }
        if (d==t) {return true;} else {return false;}
    }
}
int main ()
{
    long long n,i,t,dem=0;
    cin>>n;

    while (n>0)
    {
        if (kt(dem))
        {
            cout<<dem<<" ";
            n--;
        }
        dem++;
    }
}
