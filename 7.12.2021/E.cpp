#include<bits/stdc++.h>
using namespace std;
long long a[300001],b[300001];
int main ()
{
    long long n,i,j,kq,p,x1,x2,y1,y2;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (i=1;i<n;i++)
    {
        for (j=n;j>=i+1;j--)
        {
            if (a[j]<a[i])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
    }
    cin>>p;
    for (j=1; j<=p; j++)
    {
        cin>>x1>>y1>>x2>>y2;
        kq=0;
        for (i=1; i<=n; i++)
        {
            if (a[i]==x1 || a[i]==x2)
            {
                if (y1<=b[i] && b[i]<=y2)
                    {kq++;}
            }
            else if (b[i]==y1 || b[i]==y2)
            {
                if (x1<=a[i] && a[i]<=x2)
                    {kq++;}
            }
            if (a[i]>x2) {break;}
        }
        cout<<kq<<"\n";
    }
}
