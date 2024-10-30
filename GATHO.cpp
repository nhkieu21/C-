#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,m,n;
    cin>>m>>n;
    b=(n-2*m)/2;
    if (b>0)
    {
        a=m-b;
        cout<<a<<" "<<b;
    } else {cout<<-1;}
}
