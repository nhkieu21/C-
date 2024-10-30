#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string s;
long long i;
int main()
{
    freopen("XAUGON.INP","r",stdin);
    freopen("XAUGON.OUT","w",stdout);
    cin>>s;
    i=1;
    while (i<s.length())
    {
        if (s[i]==s[i-1])
        {s.erase(i,1);} else {i++;}
    }
    cout<<s;

}

