#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i,n,m;
    string s;
    cin>>s;

    //clock_t t1=clock();

    n=s.size();
    for (i=n; i>=0; i--)
    {
        if (s[i]=='0')
        {
            m=i;
            break;
        }
    }
    s[m]='1';
    for (i=m+1; i<=n; i++)
    {
        s[i]='0';
    }
    cout<<s;

    //clock_t t2=clock();
    //cout<<(double)(t2 - t1) / CLOCKS_PER_SEC;
}

