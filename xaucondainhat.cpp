#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int i,j,f[10001][10001],res;
string s1,s2;
int main ()
{
    res=0;
    cin>>s1>>s2;
    for (i=0;i<s1.length();i++)
    {
        for (j=0;j<s2.length();j++)
        {
            if (s1[i]==s2[j])
            {
                f[i+1][j+1]=f[i][j]+1;
                //cout<<s1[i];
            } else {f[i+1][j+1]=max(f[i][j+1],f[i+1][j]);}
            res=max(res,f[i+1][j+1]);
        }
    }
    cout<<res;
}
