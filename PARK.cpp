#include<bits/stdc++.h>
using namespace std;
int h,k,a[10001]={0},kq;
int main ()
{
    freopen("PARK.INP","r",stdin);
    freopen("PARK.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>h;
    kq=0;
    while (h--)
    {
        cin>>k;
        a[k%10000]++;
        if (a[k%10000]==1) {kq=kq+100;}
        else if (a[k%10000]>5) {kq++;}
    }
    cout<<kq;
}
