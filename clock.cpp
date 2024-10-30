#include<bits/stdc++.h>
using namespace std;
int main ()
{
        freopen("CLOCK.INP","r",stdin);
    freopen("CLOCK.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int h,p,s;
    cin>>h>>p>>s;
    if (s==59)
    {
        if (p==59)
        {
            if (h==23)
            {
                cout<<"0 0 0";
            } else {cout<<++h<<" 0 0";}
        }   else
        {
            cout<<h<<" "<<++p<<" 0";
        }
    }
    else cout<<h<<" "<<p<<" "<<++s;
}
s
