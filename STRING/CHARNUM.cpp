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
        }
    }
    cout<<d;


}
