#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2;
    int a,b;
    getline(cin,s1);
    getline(cin,s2);
    a=s1.size();
    b=s2.size();
    int t=__gcd(a,b);
    for (int i=1;i<=t;i++)
    {
        cout<<1;
    }
}
