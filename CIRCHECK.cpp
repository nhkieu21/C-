#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,r,x,y,s;
    cin>>a>>b>>r>>x>>y;
    r=r*r;
    s=pow(x-a,2)+pow(y-b,2);
    if (s<r)
    {
        cout<<1;
    } else if (s==r)
    {
        cout<<2;
    } else {cout<<3;}
}
