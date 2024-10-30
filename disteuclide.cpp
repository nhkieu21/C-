#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float x1,x2,y1,y2,d;
    cin>>x1>>y1>>x2>>y2;
    d=pow(x2-x1,2) + pow(y2-y1,2);
    d=pow(d,0.5);
    cout<<fixed<<setprecision(4);
    cout<<d;
}
