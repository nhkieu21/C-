#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    string s;
    long long dem=0,i;
    getline(cin,s);
    for (i=0;i<s.size();i++)
    {
        switch(s[i])
        {
            case 'a':
            case 'o':
            case 'e':
            case 'u':
            case 'i':
            dem++;
        }
    }
    cout<<dem;
}
