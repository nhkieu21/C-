#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int i;
    int dem[1001]= {0};
    char h;
    string s;
    getline(cin,s);
    for (i=0; i<=s.size(); i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }

        dem[s[i]]++;
    }
    for (h='A'; h<='Z'; h++)
    {
        if (dem[h]>0)
        {
            cout<<h<<" "<<dem[h]<<"\n";
        }
    }

}
