#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100000],b[100000],i;
    float goc,x,y;
    for (i=0; i<=2; i++)
    {
        cin>>a[i]>>b[i];
    }
    a[0]=a[0]-a[1];
    b[0]=b[0]-b[1];
    a[2]=a[2]-a[1];
    b[2]=b[2]-b[1];

    goc=a[0]*a[2]+b[0]*b[2];
    x=(a[0]*a[0]+b[0]*b[0]);
    y=(a[2]*a[2]+b[2]*b[2]);
    goc=goc/(sqrt(x*y));

    if (goc==0)
    {
        cout<<2;
    }
    else if (goc<0)
    {
        cout<<1;
    }
    else
    {
        cout<<3;
    }
}
