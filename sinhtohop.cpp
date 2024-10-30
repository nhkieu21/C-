
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,n,k,s[100],m,t;
    cin>>n>>k;
    //t=n+k;
    for (i=1; i<=k; i++)
    {
        s[i]=i;
    }
    m=n;
    while (m!=0)
    {
        for (i=1; i<=k; i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<"\n";
        m=0;
        for (i=k; i>=1; i--)
        {
            if (s[i]<n-k+i)
            {
                m=i;
                break;
            }
        }
        s[m]=s[m]+1;

        for (i=m+1; i<=k; i++)
        {
            s[i]=s[i-1]+1;
        }


    }
    //cout<<t;
}


