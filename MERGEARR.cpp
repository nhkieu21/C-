#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001],c[1000001];
int main ()
{
    long long m,n,t,i,j,k;
    cin>>m>>n;
    t=m+n;
    for (i=1; i<=m; i++)
    {
        cin>>a[i];
    }
    for (i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    cout<<t<<"\n";
    i=1,j=1,k=0;
    while((i<=m)&&(j<=n))
    {
        k++;
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }

    if(i>m) //A het truoc
    {
        while(j<=n)
        {
            k++;
            c[k]=b[j];
            j++;
        }
    }
    else //B het truoc
    {
        while(i<=m)
        {
            k++;
            c[k]=a[i];
            i++;
        }
    }
    for (i=1; i<=t; i++)
    {
        cout<<c[i]<<" ";
    }

}
