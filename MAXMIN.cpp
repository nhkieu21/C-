#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[4],x,y,i;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    x=a[0];
    y=a[0];
    for (i=1;i<=3;i++)
    {
        if (x<a[i])
        {
            x=a[i];
        }
        if (y>a[i])
        {
            y=a[i];
        }
    }
    cout<<x<<" "<<y;
}
