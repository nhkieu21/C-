#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i;
    string s,s1;
    getline(cin,s);
    for (i=s.size()-1; i>=0; i--)
    {
        s1+=s[i];
    }

    cout<<s1;

}
