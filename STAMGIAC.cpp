#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    float x,n,s;
    cin>>x>>n;
    s = pow(x,1/n);
    cout<<fixed<<setprecision(2);
    cout<<s;
}
