#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i,dem[10001];
    string s;
    getline(cin,s);
    for (i=0; i<s.size(); i++)
    {
        dem[s[i]]=1;
    }
    for (i=0; i<s.size(); i++)
    {
        if (s[i]==s[i+1])
        {
            dem[s[i]]++;
        }
        else
        {
            if (dem[s[i]]==1)
            {
                cout<<s[i];
            }else
            {cout<<dem[s[i]]<<s[i];}
        }
    }

}
