#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i,kq=0,d=0;
    string s;
    getline(cin,s);
    for (i=0; i<s.size(); i++)
    {
        if (s[i]==' ')
        {
            kq=max(kq,d);
            d=0;
        } else {d++;}
    }
    cout<<kq;

}
