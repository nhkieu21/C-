#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x;
    cin>>a>>b;
    x=a*b;
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        } else {b=b-a;}
    }
    cout<<a<<" "<<x/a;

}
