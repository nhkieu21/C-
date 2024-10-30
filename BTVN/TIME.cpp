#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (c==59)
    {
        if (b==59)
        {
            c=0;
            b=0;
	    if (a==23)
            {a=0;} else {a++;}
        } else {c=0;b++;}
    } else {c++;}
    cout<<a<<" "<<b<<" "<<c;
}
