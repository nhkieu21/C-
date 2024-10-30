#include<bits/stdc++.h>
using namespace std;
int BCNN(int a,int b)
{
    int x=a*b;
    while (a!=b)
    {
        if (a>b)
        {
            a-=b;
        } else {b-=a;}
    }
    cout<< x/a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    BCNN(a,b);
}
