#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool doixung(string s)
{
     string s1="";
     long long i;
     for (i=s.size()-1;i>=0;i--)
     {
         s1=s1+s[i];
     }
     if (s==s1) {return true;} else {return false;}
}
bool kt (string s, long long l)
{
    string s2;
    long long i;
    for (i=0;i<s.size()-l;i++)
    {
        s2=s.substr(i,l);
        if (doixung(s2))
        {
            return true;

        }
    }
    return false;
}
int main ()
{
    freopen("PALIN.INP","r",stdin);
    freopen("PALIN.OUT","w",stdout);
    string s;
    long long i,q,l;
    getline(cin,s);
    cin>>q;
    for (i=1;i<=q;i++)
    {
        cin>>l;
        if (kt(s,l)) {cout<<1<<"\n";} else {cout<<0<<"\n";}
    }
}
