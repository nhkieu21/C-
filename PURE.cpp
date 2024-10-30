#include<bits/stdc++.h>
using namespace std;
long long a1,n,x1,x2,x3,sum=2,z=10e9;
int main ()
{
    freopen("PURE.INP","r",stdin);
    freopen("PURE.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int m;
    string s,s1;
    cin>>m;
    cin>>s;
    s1=s;
    bool b;
    for (int i=1; i<=s.size()/2; i++)
    {
        s1.erase(0,i);
        //cout<<s1<<"\n";
        b=true;
        for (int j=0; j<s1.size(); j++)
        {
            if (s1[j]!=s[j])
            {
                b=false;
                continue;
            }
        }
        if (b)
        {
            break;
        }
    }
    if (b)
    {
        for (int j=0; j<s.size()-s1.size(); j++)
        {
            cout<<s[j];
        }
    }
    else cout<<"NO";

}
