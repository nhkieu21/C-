#include<bits/stdc++.h>
using namespace std;
int Daoso(int n) 
{
    int d=0;
    while (n>0)
    {
        d*=10;
        d+=n%10;
        n/=10;
    }
    cout<<d;
}
int main()
{
    int n;
    cin>>n;
    Daoso(n);
}
