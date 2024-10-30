#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n=1,kq=0;
    while (n!=0)
    {
        cin>>n;
        if (n%2==1)
        {
            kq=kq+n;
        }
    }
    cout<<kq;
}
