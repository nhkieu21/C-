#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool kt (string s, long long h)
{
    long long i,j,d=0;
    if (s[i]!=s[i+h])
    {
        return false;
        d++;
    }
    else
    {
        for (i=0; i<s.size()-h; i++)
        {
            if (s[i]!=s[i+h])
            {
                return false;
                d++;
                break;
            }
        }
    }
    if (d==0)
    {
        return true;
    }
}

bool lap (string s)
{
    long long h,t=0;
    for (h=1;h<=s.size()/2;h++)
    {
        if (kt(s,h))
        {
            return true;
            t++;
            break;
        }
    }
    if (t==0) {return false;}
}
int main ()
{
    long long n,dem=0,i;
    string s;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>s;
        if (lap(s)) {dem++;}
    }
    cout<<dem;
}
