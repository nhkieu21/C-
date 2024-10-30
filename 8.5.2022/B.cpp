#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main ()
{
    long long n,k,i,tam=0;
    string s;
    cin>>n>>k;
    cin>>s;
    i=0;
    while (i<s.size())
    {
        if (s[i]<s[i+1])
        {
            s.erase(i,1);
            i=0;
            k--;
        } else {i++;}
        if (k==0) {break;}
    }
    cout<<s;
}
