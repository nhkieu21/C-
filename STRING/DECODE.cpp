#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i,dem[10001],j;
    string s;
    getline(cin,s);
    for (i=0; i<s.size(); i++)
    {
        if ((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
        {
            if (s[i-1]>='0' && s[i-1]<='9')
            {
                for (j=1;j<=s[i-1]-48;j++)
                {
                    cout<<s[i];
                }
            } else {cout<<s[i];}
        }
    }

}
