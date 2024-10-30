#include<string.h>
#include<bits/stdc++.h>
using namespace std;
string s[101];
long long i,n,k,j;
/*bool kt (char s[][], char s[][])
{

}*/
int main()
{
    freopen("MK.INP","r",stdin);
    freopen("MK.OUT","w",stdout);
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>s[i];
        //cout<<s[i];
    }
    /*for (i=0;i<n;i++)
    {
        //getline(cin,s[i]);
        cout<<s[i];
    }*/
    //s.erase(n);
    k=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i!=j)
            {if (s[i].find(s[j])!=-1)
            {
                k++;
                //cout<<i<<" "<<j<<"\n";
            }}
        }
    }
    cout<<k;
}
