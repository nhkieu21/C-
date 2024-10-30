#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string s1,s2,kq;
    string input,chuoi;
    int n;
    cin>>n;
    s1.clear();
    s2.clear();
    kq.clear();
    for (int i=0;i<=n;i++)
    {
        getline(cin,input);
        s1=s1+input;

    }
    for (int i=0;i<n;i++)
    {
        getline(cin,input);
        s2=s2+input;

    }
    for (int i=0;i<s1.size();i++)
    {

        kq+=abs(s1[i]-s2[i]);
    }
    long long ok=0;
    for (int i=0;i<kq.size();i+=7)
    {
        chuoi = kq.substr(i,7);
        long long h=kq.find(chuoi);
        ok = max(ok,h);
    }
    ok = ok/(2*n);
    cout<<fixed<<setprecision(2);
    cout<<(float)ok/n *100;
}
