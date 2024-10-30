#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool kt (string s)
{
    int dem[10001],i;
    for (i=0;i<s.size();i++)
    {
        dem[s[i]]++;
        if (dem[')']>dem['('])
        {
            return false;
            break;
        }
    }
    if (dem[')']!=dem['('])
    {
        return false;
    } else {return true;}
}
int main ()
{
    string s;
    getline(cin,s);
    if (kt(s))
    {
        cout<<"TRUE";
    } else {cout<<"FALSE";}

}
