#include<bits/stdc++.h>
using namespace std;
class maxmin
{
    long long a,b,c,d;
public:
    void Nhap()
    {
        cin>>a>>b>>c>>d;
    }
    long long _max()
    {
        return max(max(max(a,b),c),d);
    }
    long long _min()
    {
        return min(min(min(a,b),c),d);
    }

};
main ()
{
    maxmin x;
    x.Nhap();
    cout<<x._max()<<" "<<x._min();
}
