#include<bits/stdc++.h>
using namespace std;
long long x,dem,t,a[100001];
bool kt (long long x,long long t)
{
    dem=0;
    while (x>0)
    {
        dem++;
        a[dem]=x%t;
        x=x/t;
    }
    sort (a+1,a+1+dem);
    if (a[dem]-a[1]!=0)
    {
        return false;
    } else {return true;}
}
int main ()
{
    freopen("BASE.INP","r",stdin);
    freopen("BASE.OUT","w",stdout);
    cin>>x;
    t=2;
    while (!kt(x,t)) {t++;}
    cout<<t;
}
