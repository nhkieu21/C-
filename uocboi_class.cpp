#include<bits/stdc++.h>
using namespace std;
class uocboi
{
    long long a,b,x;
public:
    void Nhap()
    {
        cin>>a>>b;
    }
    long long _uocboi()
    {
        x=a*b;
        while (a!=b)
        {
            if (a>b)
            {
                a=a-b;
            }
            else
            {
                b=b-a;
            }
        }
        cout<<a<<" "<<x/a;

    }

};
main ()
{
    uocboi x ;
    x.Nhap();
    return x._uocboi();
}
