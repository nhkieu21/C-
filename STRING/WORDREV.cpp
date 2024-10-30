#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i,d=0;
    string s,s1;
    getline(cin,s);
    for (i=0; i<=s.size(); i++)
    {
        if (s[i]==' ' || i==s.size())
        {
            s1=s.substr(i-d,d)+' '+s1;
            d=0;
        } else {d++;}
    }//cout<<s.size();
    cout<<s1;

}
