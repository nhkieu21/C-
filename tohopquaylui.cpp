#include<bits/stdc++.h>
using namespace std;
int n,x[10001],b[10001]={0},r,a[100001],dem=0;

void Try (int i)
{
    int j,h;
    for (j=x[i-1]+1; j<=n-r+i; j++)
    {
            x[i]=j;
            if (i==r)
            {
                int sum=0;
                for (h=1; h<=r; h++)
                {
                    sum=sum+a[x[h]];
                    //cout<<a[x[h]];
                }
                if (sum%5==0) {dem++;}
                //cout<<"\n";
            }
            else  Try(i+1);
    }

}
int main ()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i]%5;
    }
    r=3;
    Try(1);
    cout<<dem;
}
