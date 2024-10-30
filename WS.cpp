#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("WS.INP","r",stdin);
    freopen("WS.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    long long k,t=1,a[255]={0},kq=1,kq1=1;
    cin>>k;
    string s;
    cin>>s;

    for (int i=0; i<s.size(); i++)
    {
        a[s[i]]++;

    }
    for (char h='a'; h<='z'; h++)
    {
        if (a[h]>1)
        {
            a[h]=a[h]%k;
            t=(t*a[h])%k;
        }
        //cout<<a[h]<<" ";
    }

    for (int i=1;i<=s.size();i++)
    {
        kq=(kq*i)%k;
    }
        for (long long i=1;i<=t;i++)
    {
        kq1=(kq1*i)%k;
    }
    cout<<kq/kq1;
}
