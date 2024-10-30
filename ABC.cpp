#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    long long a[5],i;
    string s;
    cin>>a[1]>>a[2]>>a[3];
    cin>>s;
    sort(a+1,a+1+3);
    for (i=0;i<s.size();i++)
    {
        switch (s[i])
        {
            case 'A': cout<<a[1]<<" "; break;
            case 'B': cout<<a[2]<<" "; break;
            case 'C': cout<<a[3]<<" "; break;
        }
    }
    //cout<<a[1]<<" "<<a[2]<<" "<<a[3];
}
