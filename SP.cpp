#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long m,n,t,h,k;
    cin>>m>>n>>t;
    m++;
    h=n/m;
    k=n%m;
    m--;
    cout<<h*m*t + k*t;
}
