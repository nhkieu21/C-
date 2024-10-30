#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool kt (string s)
{
    long long i,t=s.size(),d=0;
    for (i=0;i<t/2;i++)
    {
        if (s[i]!=s[t-1-i])
        {
            d++;
            return false;
            break;
        }
    }
    if (d==0)
    {
        return true;
    }
}
int main ()
{
    string s[10001];
    long long n,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>s[i];
        if (kt(s[i]))
        {
            cout<<"TRUE\n";
        } else {cout<<"FALSE\n";}
    }

}

