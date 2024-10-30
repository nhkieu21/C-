#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i;
    string s;
    getline(cin,s);
    for (i=0; i<=s.size(); i++)
    {
        while (s[i]>='0' && s[i]<='9')
        {
            s.erase(i,1);
        }
    }
    cout<<s;

}
