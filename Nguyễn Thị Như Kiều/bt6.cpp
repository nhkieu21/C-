#include<bits/stdc++.h>
using namespace std;
void PHANTICH(int n)
{
    int i,d;
    for (i=2;i<=n;i++)
    {
        d=0;
        while (n%i==0)
        {
            d++;
            n=n/i;
        }
        if(d!=0)
        {
            if(d > 1) {cout<<i<<"^"<<d;}
            else {cout<<i;}
            if(n > i){
                cout<<" * ";
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    PHANTICH(n);
}
