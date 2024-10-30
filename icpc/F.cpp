#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int kt (string s)
{
    int t=s.size(),k=0,i;
    int dem[1000]= {0};
    for (i=0; i<t; i++)
    {
        dem[s[i]]++;
    }
    for (i='a'; i<='z'; i++)
    {
        if (dem[i]==1)
        {
            k++;
        }
    }
    return k;
}
bool kt1 (string s)
{
    int i,j,kq=0;
    string z;
    for (i=0; i<s.size(); i++)
    {
        for (j=1; j<=s.size()-i; j++)
        {
            z=s.substr(i,j);
            kq+=kt(z);
        }
    }
    cout<<kq<<"\n";
}
int main ()
{
    int i,n;
    string s;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>s;
        kt1(s);
    }

}
