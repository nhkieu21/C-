#include<bits/stdc++.h>
using namespace std;
float Max(float a,float b, float c) 
{
    float max;
    if (a>=b)
    {
        max=a;
    } else {max=b;}
    if (c>=max)
    {
        max=c;
    } 
    cout<<max;
}
int main ()
{
    float a,b,c;
    cin>>a>>b>>c;
    Max(a,b,c);
}