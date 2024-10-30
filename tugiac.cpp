#include<bits/stdc++.h>
#include<string.h>
using namespace std;
double dodai (double a,double b,double c, double d)
{
    double t=pow(a-c,2)+pow(b-d,2);
    t=pow(t,0.5);
    return t;
}
int main ()
{
    freopen("TUGIAC.INP","r",stdin);
    freopen("TUGIAC.OUT","w",stdout);
    double x1,x2,x3,x4,y1,y2,y3,y4,ab,bc,cd,da;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    ab=dodai(x1,y1,x2,y2);
    bc=dodai(x2,y2,x3,y3);
    cd=dodai(x3,y3,x4,y4);
    da=dodai(x4,y4,x1,y1);
    if (ab==cd)
    {
        if (ab==bc)
        {
            if (y1==y2)
            {
                cout<<5;
            }
            else
            {
                cout<<3;
            }
        } else
        {
            if (y1==y2)
            {
                cout<<4;
            }
            else
            {
                cout<<2;
            }
        }

    }
    else
    {
        if (y1==y4) {cout<<1;} else {cout<<0;}
    }
}
