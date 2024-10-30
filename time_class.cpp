#include<bits/stdc++.h>
using namespace std;
class Time
{
    long long a,b,c;
public:
    void Nhap()
    {
        cin>>a>>b>>c;
    }
    long long _time()
    {
        if (c==59)
        {
            if (b==59)
            {
                c=0;
                b=0;
                if (a==23)
                {
                    a=0;
                }
                else
                {
                    a++;
                }
            }
            else
            {
                c=0;
                b++;
            }
        }
        else
        {
            c++;
        }
        cout<<a<<" "<<b<<" "<<c;
    }

};
main ()
{
    Time x ;
    x.Nhap();
    return x._time();
}
