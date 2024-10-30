#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    long long i;
    string s;
    getline(cin,s);
    for (i=s.size()-1;i>=0; i--)
    {
        while (s[s.size()-1]==' ')
        {
            s.erase(s.size()-1,1);
        }
        while (s[i]==' ' && s[i+1]==' ')
        {
            s.erase(i,1);
        }
    }
    for (i=0; i<s.size(); i++)
    {
        while (s[0]==' ')
        {
            s.erase(0,1);
        }

        if (s[i]!=' ')
        {
            cout<<s[i];
        } else {cout<<"\n";}
    }

    //cout<<s;


}
