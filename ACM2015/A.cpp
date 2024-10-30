#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int h;
    cin>>h;
    while (h--)
    {
        string s;
        cin>>s;
        int t=s.size()-1;
        int k=0;
        for (int i=0;i<=t/2;i++)
        {
            if (s[i]!=s[t-i])
            {
                k++;

            }
        }
        cout<<k<<"\n";
    }
}
