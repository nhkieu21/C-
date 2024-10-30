#include<bits/stdc++.h>
using namespace std;
class countsum
{
    long long n,d=0,s=0;
public:
    void Nhap()
    {
        cin>>n;
    }
    long long _countsum()
    {
        while (n>0)
        {
            s=s+n%10;
            d++;
            n=n/10;
        }
        cout<<d<<" "<<s;

    }

};
main ()
{
    countsum x ;
    x.Nhap();
    return x._countsum();
}
