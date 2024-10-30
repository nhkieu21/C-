#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    string s1="hello";
    int j=0;
    bool t=false;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]==s1[j]) {j++;}
        if (j==5) {t=true;break;}
    }
    if (t==true) cout<<"YES";
    else cout<<"NO";
}
