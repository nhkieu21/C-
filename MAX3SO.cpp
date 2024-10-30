#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,b,c,kq;
    cin>>a>>b>>c;
    kq=a;
    if (kq<b)
    {
        kq=b;
    }
    if (kq<c)
    {
        kq=c;
    }
    cout<<kq;
}
