#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool kt(string s)
{
    long long d=0,i;
    for (i=0; i<s.size(); i++)
    {
        if (s[i]!='9')
        {
            d++;
            return false;
        }
    }
    if (d==0)
    {
        return true;
    }
}
long long ktra(string s)
{
    long long t=s.size()-1,i=t/2;
    while (s[i]==s[t-i])
    {
        if (i==0)
        {
            i=t/2;
            break;
        }
        i--;

    }
    if (s[i]<=s[t-i])
    {
        if (s[t/2]=='9')
        {
            s[t/2]='0';
            s[t/2-1]++;
        }
        else
        {
            s[t/2]++;
        }
    }
    for (i=t/2+1; i<=t; i++)
    {
        s[i]=s[t-i];
    }
    cout<<s<<"\n";

}
int main ()
{
    string s;
    long long i,t,j;
    cin>>t;
    for (j=1; j<=t; j++)
    {
        cin>>s;
        if (kt(s))
        {
            cout<<1;
            for (i=1; i<s.size(); i++)
            {
                cout<<0;
            }
            cout<<1;
        }
        else
        {
            ktra(s);
        }
    }

}


