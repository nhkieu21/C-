#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i,d,d1,nho=0,tong;
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
    else
    {
        for (i=1; i<=d1-d; i++)
        {
            s='0'+s;
        }
        d=d1;
    }
    for (i=d-1; i>=0; i--)
    {
        tong=(s[i]-48)+(s1[i]-48)+nho;
        nho=tong/10;
        tong=tong%10;
        kq[i]=char (tong+48);
    }
    if(nho>0)
    {
        kq= char (nho+48)+kq;
    }
    cout<<kq;


}
