#include<bits/stdc++.h>
using namespace std;
long long a[1000001]={0},b[11]={0};

int main ()
{
    long long i,n ,dem=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i]%5;
        b[a[i]]++;
    }
    dem+=b[0]/3;
    dem+=b[0]*b[1]*b[4];
    dem+=b[0]*b[2]*b[3];
    dem+=(int) (b[1]/2)*b[3];
    dem+=(int) (b[2]/2)*b[1];
    dem+=(int) (b[4]/2)*b[2];
    dem+=(int) (b[3]/2)*b[4];

    cout<<dem;
}



