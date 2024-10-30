#include<bits/stdc++.h>
using namespace std;
class herong
{
    double a,b,c;
public:
    void Nhap()
    {
        cin>>a>>b>>c;
    } double Dientich()
    {
        double p,s;
        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        return s;
    }

};
main ()
{
    herong x;
    x.Nhap();
    cout<<fixed<<setprecision(2)<<x.Dientich();
}
