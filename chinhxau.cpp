#include<bits/stdc++.h>
#include<string.h>
using namespace std;
long long xuly(string s)
{
    long long i;
    for (i=0; i<s.size(); i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }

    for (i=0; i<s.size(); i++)
    {
        while (s[0]==' ')
        {
            s.erase(0,1);
        }
        while (s[i]==' ' && s[i+1]==' ')
        {
            s.erase(i,1);
        }
        if (s[i-1]==' ' || i==0)
        {
            if (s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
    }
    cout<<s<<"\n";
}
int main ()
{
    long long n,j,kq=0;
    string s;
    cin>>n;
    for (j=1; j<=n; j++)
    {
        fflush(stdin);
        getline(cin,s);
        xuly(s);

    }
}
