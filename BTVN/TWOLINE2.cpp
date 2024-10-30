#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],i,b[1000];
    for (i=0;i<=3;i++)
    {
        cin>>a[i]>>b[i];
    }
    a[0]=a[1]-a[0];
    b[0]=b[1]-b[0];
    a[1]=a[3]-a[2];
    b[1]=b[3]-b[2];

    if ((a[0]*b[1]+a[1]*b[0])==0)
    {
        cout<<"TRUE";
    } else {cout<<"FALSE";}

}
