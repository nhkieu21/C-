#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool tong (string s)
{
    long long h,kq=0;
    for (h=0;h<s.size();h++)
    {
        kq=kq+s[h]-48;
    }
    if (kq%3==0) {return true;} else {return false;}
}
void xoa(string s)
{
    long long i,j,dem=0;
    string t=s;
    for(i=1;i<s.size();i++)
    {
        for (j=0;j<=s.size()-i;j++)
        {
            s.erase(j,i);
            //cout<<s<<"\n";
            //tong(s);
            if (tong(s)) {dem++;}
            s=t;
        }
    }
    cout<<dem<<"\n";
}

int main ()
{
    string s;
    long long i,t,j;
    cin>>s;
        xoa(s);


}

