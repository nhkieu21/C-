#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long p,i,j,a[11];
    cin>>p;
    for (i=1;i<=p;i++)
    {
        for (j=0;j<=10;j++)
        {
            cin>>a[j];
        }
        cout<<i<<" ";
        sort (a+1,a+1+10);
        cout<<a[8]<<"\n";
    }
}
