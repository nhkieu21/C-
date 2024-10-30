#include<bits/stdc++.h>
using namespace std;
int i,n,r,s[100],m,t,k,dem;
void th(long long n,long long r,long long k)
{
    for (i=1; i<=r; i++)
    {
        s[i]=i;
    }
    m=n;
    dem=0;
    while (m!=0)
    {
        if (dem==k)
            for (i=1; i<=r; i++)
            {

                cout<<s[i]<<" ";
            }
        dem++;
        //cout<<"\n";
        m=0;
        for (i=r; i>=1; i--)
        {
            if (s[i]<n-r+i)
            {
                m=i;
                break;
            }
        }
        s[m]=s[m]+1;

        for (i=m+1; i<=r; i++)
        {
            s[i]=s[i-1]+1;
        }

    }
}
int main ()
{

    cin>>n>>r>>k;
    th(n,r,k);
}


