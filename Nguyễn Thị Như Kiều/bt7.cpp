#include<bits/stdc++.h>
using namespace std;
int UCLN(int a,int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a-=b;
        } else {b-=a;}
    }
    cout<< a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    UCLN(a,b);
}
