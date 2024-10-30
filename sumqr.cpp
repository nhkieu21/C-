#include<bits/stdc++.h>
using namespace std;
class sumqr
{
    long long n,k;
    public: void nhap ()
    {
        cin>>n>>k;
    }
    long long tong ()
    {
        return n/k + n%k;
    }

};
main ()
{
    sumqr x;
    x.nhap();
    cout<<x.tong();
}
