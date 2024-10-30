#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,n;
    cin>>n;
    i=2;
    while (n>1)
    {
        if (n%i==0) {cout<<i<<" ";n/=i;}
            else i++;
    }
}
