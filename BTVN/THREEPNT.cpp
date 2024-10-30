#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],i,b[1000];
    for (i=0;i<=2;i++)
    {
        cin>>a[i]>>b[i];
    }
    a[1]=a[1]-a[0];
    b[1]=b[1]-b[0];
    a[2]=a[2]-a[0];
    b[2]=b[2]-b[0];
    if (a[2]*b[1]==a[1]*b[2])
    {
        cout<<"TRUE";
    } else {cout<<"FALSE";}

}
