#include<bits/stdc++.h>
using namespace std;
class gatho
{
    long long a,b,m,n;
public:
    void Nhap()
    {
        cin>>m>>n;
    }
    long long _gatho()
    {
        b=n-2*m;
        if (b>0 && b%2==0 )
        {
            b=b/2;
            a=m-b;
            cout<<a<<" "<<b;
        }
        else
        {
            cout<<-1;
        }

    }

};
main ()
{
    gatho x ;
    x.Nhap();
    x._gatho();
}
