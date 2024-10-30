#include<bits/stdc++.h>
#include<iostream>
#define MAX 500
using namespace std;
void nhap(int* x,int* n)
{
    cout<<"nhap x:"; cin>>*x;
    cout<<"nhap n:"; cin>>*n;
}
void in( int a[MAX])
{
    int i;
    for(i=MAX-1;i>=0;i--)
        if(a[i]!=0) break;
    for(int j=i;j>=0;j--)
        cout<<a[j];
}
void tinh(int x,int n)
{
        int a[MAX]={0},i,j,k,du=0;
        a[0]=1;
        if(n>=0)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<MAX-1;j++)
                {
                    k=(a[j]*x+du)/10;
                    if ((a[j]*x+du)>=10)
                    {
                        a[j]=(a[j]*x+du)%10;
                        du=k;
                    }
                    else
                        {
                            a[j]=(a[j]*x+du)%10;
                            du=0;
                        }
                }
            }
            in(a);
        }
        else {cout<<"1/"; in(a);}
}
int main()
{
    int x,n;
    nhap(&x,&n);
    tinh(x,n);
    //in(a);
}
