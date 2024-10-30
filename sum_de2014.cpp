#include<bits/stdc++.h>
using namespace std;
int main ()
{
//    freopen("SUM.INP","r",stdin);
//    freopen("SUM.OUT","w",stdout);
    double x,y;
    long long a,b;
    cin>>x>>y;
    a=x;
    b=y;
    if (x-a >0) {a++;}
    a--;
    a=a*(a+1)*(2*a+1);
    b=b*(b+1)*(2*b+1);
    a=(b-a)/6;
    cout<<a;
}
