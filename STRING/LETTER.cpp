#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main ()
{
    freopen("LETTER.INP","r",stdin);
    freopen("LETTER.OUT","w",stdout);
    long long i,n;
    string s;
    getline(cin,s);
    cin>>n;
    for (i=n-1;i>=0;i--)
    {
        cout<<s[i];
    }
    for (i=s.size()-1;i>=n;i--)
    {
        cout<<s[i];
    }

}
