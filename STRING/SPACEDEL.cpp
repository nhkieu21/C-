#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i;
    string s;
    getline(cin,s);
    for (i=0; i<s.size(); i++)
    {
        while (s[i]==' ' && s[i-1]==' ')
        {
            s.erase(i,1);
        }
    }
    cout<<s;


}
