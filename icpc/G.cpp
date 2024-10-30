#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main ()
{
    long long i,j,n,x,y,k;
    string s;
    getline(cin,s);
    cin>>k;
    for (i=1; i<=k; i++)
    {
        cin>>n>>x>>y;
        for (j=x-1; j<y; j++)
        {
            s[j]+=n;
            if (s[j]>90)
            {
                s[j]-=26;
            }
        }
    }
    cout<<s;
}
