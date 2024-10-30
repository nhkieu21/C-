#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i,d=0;
    string s;
    getline(cin,s);
    for (i=0;i<s.size();i++)
    {
        if (s[i]>='0' && s[i]<='9')
        {
            d++;
        } else if (s[i]>='a' && s[i]<='z')
        {
            d++;
        } else if (s[i]>='A' && s[i]<='Z')
        {
            d++;
        }
    }
    cout<<s.size()-d;


}
