#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x;
    cin>>a>>b>>c;

    switch (b)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        x = 31;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        x = 30;
        break;
        case 2:
        if (c%4==0)
        {
            x = 29;
        }
        else
        {
            x = 28;
        }
        break;
    }

    if (a==x)
    {
        a=1;
        if (b<12)
        {
            b++;
        } else {b=1;c++;}
    } else {a++;}
    cout<<a<<" "<<b<<" "<<c;

}
