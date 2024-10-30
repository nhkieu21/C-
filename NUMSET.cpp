#include<bits/stdc++.h>
using namespace std;
int i,j,s,kq=0,dem;
string n,t;
set <string> a;
bool kt (string n)
{
    s=0;
    for (dem=0;dem<n.size();dem++)
    {
        s=s+n[dem]-48;
    }
    if (s%3==0 && s!=0) {return true;} else {return false;}
}

int main ()
{
    freopen("NUMSET.INP","r",stdin);
    freopen("NUMSET.OUT","w",stdout);
    cin>>n;
    t=n;
    if (kt(n)) {a.insert(n);}
    for (i=1; i<t.size(); i++)
    {
        for (j=0; j<t.size()-i+1; j++)
        {
            n=t;
            n.erase(j,i);
            if (n[0]=='0') continue;
            if (kt(n)) {a.insert(n); }
        }
    }

    cout<<a.size();
}

