#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool xaucon (string s, string s1)
{
    long long d,d1,i,j,dem;
    d=s.size();
    d1=s1.size();
    if (d==d1)
    {
        return false;
    }
    if (d<d1)
    {
        i=0;
        j=0;
        dem=0;
        while (i<d)
        {
            while (j<d1)
            {
                if (s[i]!=s1[j])
                {
                    j++;
                }
                else
                {
                    j++;
                    i++;
                    dem++;
                }
            }
            if (j==d1)
            {
                break;
            }
        }

        if (dem==d)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (d>d1)
    {
        return xaucon(s1,s);

    }
}

int main ()
{
    freopen("HCODE.INP","r",stdin);
    freopen("HCODE.OUT","w",stdout);
    string s[500],a,b;
    long long n,i,t=0,j;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for (i=1;i<n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if (xaucon(s[i],s[j]))
            {
                t++;
                cout<<0<<"\n";
                cout<<i;
                break;
            }
        }
        if (t==1){break;}
    }
    if (t==0){cout<<1;}
}

