#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    string s;
    int n,a[100001];
    cin>>s;
    for (int i=1;i<=s.size();i++)
    {
        a[i]=int (s[i-1]- '0');
    }
    n=s.size()-1;
    while (n>0 && a[n]>=a[n+1]) n--;
    if (n<=0) cout<<"BIGGEST";
    else
    {
        int k=s.size();
        while (a[k]<=a[n]) k--;
        swap(a[k],a[n]);
        int l=n+1, r=s.size();
        while (l<r)
        {
            swap(a[l],a[r]);
            l++;
            r--;
        }
        //sort (a+l,a+l+r);
        for (int j=1;j<=s.size();j++)
        {
            cout<<a[j];
        }
        cout<<"\n";
    }
}

