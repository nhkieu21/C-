#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("BRICKS.INP","r",stdin);
    freopen("BRICKS.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    long long g,y,sum,tam,i,a,b;
    cin>>g>>y;
    sum=g+y;
    tam=(g+4)/2;
    i=1;
    do
    {
        a=i;
        b=tam-i;
        if (a*b==sum)
        {
            cout<<min(a,b)<<" "<<max(a,b);
            break;
        } else {i++;}
    }
    while (a*b!=sum);
}
