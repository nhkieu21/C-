#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string s;
long long i,j,n,k,d,l,kq,sum,a,b;
long long tong (long long a, long long b,long long n)
{
    l=a+b-2;
    kq=0;
    for (int i=1; i<=l; i++)
    {
        if (i<=n)
        {kq+=i;} else {kq=kq+2*n-i;}
    }
    if (l<n)
    {
        if (l%2==0)
        {
            kq+=b;
        }
        else
        {
            kq+=a;
        }
        //return kq;
    }
    else if (l>=n)
    {
        if (l%2==0)
        {
            kq=kq+n-a+1;
        }
        else
        {
            kq=kq+n-b+1;
        }
        //return kq;
    }
    return kq;
}

int main()
{
    freopen("MATRIX.INP","r",stdin);
    freopen("MATRIX.OUT","w",stdout);
    cin>>n>>k;
    cin>>s;
    a=1;
    b=1;
    sum=1;
    for(int h = 0; h < k; h++)
    {
        if(s[h] == 'U') a --;
        else if(s[h] == 'D') a ++;
        else if(s[h] == 'R') b ++;
        else if(s[h] == 'L') b --;

        sum += tong (a,b,n);
        //Dcout<<tong (a,b,n)<<"\n";
    }
    cout<<sum;
    //cin>>i>>j;
    //cout<<tong (i,j);
}
