#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("HEXA.INP","r",stdin);
    freopen("HEXA.OUT","w",stdout);
    int a,b,c,d,e,f,s;
    cin>>a>>b>>c>>d>>e>>f;
    s=a+b+c+d+e+f;
    if (s%2==1) {s=1;} else {s=0;}
    s=s+a*b*2+c*d*2+e*f*2;
    cout<<s;
}
