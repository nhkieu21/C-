#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[101],i;
    string s1;
    getline(cin,s1);
    bool t=true;
    for (i=0;i<s1.size()/2;i++)
    {
        if (s1[i]!= '4') {t=false;}
    }
    for (i=s1.size()/2;i<s1.size()-1;i++)
    {
        if (s1[i]!='8') {t=false;}
    }
    if (s1[i]!='9') {t=false;}
    if (t==true)
    {
        cout<<"Yes";
    } else cout<<"No";
}
