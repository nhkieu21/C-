#include<bits/stdc++.h>
using namespace std;
int t,a[10],b[10],c[10],s1,s2,s3,h;
void kt(int n)
{
    bool k1=false,k2=false,k3=false;
    for (int i=1; i<=3; i++)
    {
        if (a[i]==n)
        {
            k1=true;
        }
        if (b[i]==n)
        {
            k2=true;
        }
        if (c[i]==n)
        {
            k3=true;
        }
    }
    if (k1&&k2&&k3)
    {
        cout<<"TRUE\n";
    }
    else
    {
        cout<<"FALSE\n";
    }
}
int main ()
{

    cin>>h;
    while (h--)
    {
        cin>>a[1]>>a[2]>>a[3];
        s1=a[1]*a[2]*a[3];
        cin>>b[1]>>b[2]>>b[3];
        s2=b[1]*b[2]*b[3];
        cin>>c[1]>>c[2]>>c[3];
        s3=c[1]*c[2]*c[3];
        t=s1+s2+s3;
        float n;
        n=pow(t,(float)1/3);
        if (n!=(int)n)
        {
            cout<<"FALSE\n";
        }
        else
        {
            kt((int)n);
        }
    }

}
