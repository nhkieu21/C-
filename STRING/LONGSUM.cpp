#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    long long i,d,d1,h,t;
    string s,s1,kq;
    getline(cin,s);
    getline(cin,s1);
    d=s.size();
    d1=s1.size();
    if (d>d1)
    {
        for (i=1; i<=d-d1; i++)
        {
            s1='0'+s1;
        }
    }
    else if (d1>d)
    {
        for (i=1; i<=d1-d; i++)
        {
            s='0'+s;
        }
        d=d1;
    }
    h=0;
    for (i=d-1; i>=0; i--)
    {
        t=(s[i]-48)+(s1[i]-48)+h;
        h=t/10;
        t=t%10;
        kq=char (t+48)+kq;
    }
    if(h>0)
    {
        kq= char (h+48)+kq;
    }
    cout<<kq;


}
