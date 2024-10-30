#include <bits/stdc++.h>
#include<string.h>
using namespace std;
string s;
long long kq,i,j,d,n;
int main ()
{
    freopen("simi.inp","r",stdin);
    freopen("simi.out","w",stdout);
    cin>>s;
    kq=s.length();
    n=s.length();
    i=1;j=1;
    while (i<n)
    {
        d=0;
        while(d<n)
        {
            if (s[d]==s[i])
            {
                d++;i++;kq++;
            }
            if (s[d]!=s[i])
            {
                d=n;
                i=n-1;
            }
        }
        if (i==n-1)
        {
            j++;
            i=j;
        }
        if (j>n-1) {break;}
    }
    cout<<kq;

}
