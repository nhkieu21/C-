#include<bits/stdc++.h>
using namespace std;

void nhap (int *&a, int n)
{
    a=new int [n];
    for (int i=0;i<n;i++)
    {
        *(a+i)=rand()%100;
    }
}

void xuat (int *a, int n)
{
    //a=new int [n];
    for (int i=0;i<n;i++)
    {
       cout<<*(a+i)<<"\n";
    }
}
int main ()
{
    int n,*a;
    cin>>n;
    nhap(a,n);
    sort(a,a+n);
    xuat(a,n);
}

