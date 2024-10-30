#include<bits/stdc++.h>
#include<string.h>
using namespace std;
long long zero (long long n)
{
    long long i=1,sum=0;
    while (n>=pow(5,i))
    {
        sum=sum+n/pow(5,i);
        i++;
    }
    return sum;
}
long long chuso( string s)
{
    long long dem[1001]={0},i,kq,j;
    kq=zero(s.size());
    for (i=0;i<s.size();i++)
    {
        dem[s[i]]++;
    }
    for (j='A';j<='Z';j++)
    {
        if (dem[j]>1)
        {
            kq=kq-zero(dem[j]);
        }
    }
    return kq;
}
int main ()
{
    string s[1001];
    long long n,i;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>s[i];
        cout<<chuso(s[i])<<"\n";
    }

}

