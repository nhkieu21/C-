#include<bits/stdc++.h>
using namespace std;
bool Prime(int n) 
{
    int i,d=0;
    if (n<2) {return false;}
    if (n==2){return true;}
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            d++;
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if (Prime(n))
    {
        cout<<n<<" la so nguyen to";
    } else {cout<<n<<" khong la so nguyen to";}
}
