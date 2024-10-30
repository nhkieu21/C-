#include<bits/stdc++.h>
using namespace std;
float Max(float x,float y)
{
    float max;
    if (x>=y)
    {
        max=x;
    } else {max=y;}
    cout<<max;
}
int main ()
{
    float x,y;
    cin>>x>>y;
    Max(x,y);
}
