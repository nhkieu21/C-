#include<bits/stdc++.h>
using namespace std;
class listus
{
    long long n,i;
public:
    void Nhap()
    {
        cin>>n;
    }
    long long _listus()
    {
        for (i=1; i<=n/2; i++)
        {
            if (n%i==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<n;
    }

};
main ()
{
    listus x ;
    x.Nhap();
    return x._listus();
}
