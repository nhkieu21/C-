#include<bits/stdc++.h>
using namespace std;
int n,k,a[10001];
bool stop ;
void nhap ()
{
    cin>>n;
    k=1;
    a[k]=n;
}
void in ()
{
    for (int i=1;i<=k;i++)
    {
        if (i==1){cout<<"(";}
        cout<<a[i];
        if (i<k) {cout<<" ";}
        else {cout<<")";}
    }
}
void kt ()
{
    int i=k;
    while (i>0 && a[i]==1) i--;
    if (i==0) stop=true;
    else
    {
        a[i]--;
        int d=k-i+1;
        k=i;
        for (int j=i+1;j<=i+d/a[i];j++)
        {
            a[j]=a[i];
        }
        k=k+d/a[i];
        if (d%a[i]!=0)
        {
            a[++k]=d%a[i];
        }
    }
}
int main ()
{
    nhap();
    stop=false;
    while (!stop)
    {
        in();
        kt();
    }
}
