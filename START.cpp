#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("START.INP","r",stdin);
    freopen("START.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    double vr,vt,s;
    cin>>vr>>vt>>s;
    if (vr>=vt)
    {
        cout<<-1;
    } else {
        double k=1.0/vr - 1.0/vt;
        k=k*5*s/3;
        cout<<fixed<<setprecision(2)<<k;
        //cout<<k;
    }

}
