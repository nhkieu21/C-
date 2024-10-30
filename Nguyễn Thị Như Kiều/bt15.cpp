#include<bits/stdc++.h>
using namespace std;
bool Doixung(long long n)
{
    long long d=0,h=n;
    
    while (n>0)
    {
        d*=10;
        d+=n%10;
        n/=10;
    }
    if (d==h)
    {
        return true;
    } else {return false;}
}
int main()
{
    int n;
    cin>>n;
    if (Doixung(n))
    {
        cout<<n<<" la so doi xung ";
    } else {cout<<n<<" khong phai so doi xung ";}
}
