#include<bits/stdc++.h>
using namespace std;
double a1,b1;
long a2,b2;
long long s1,s2,s3,tg,tg2,kq;
int main ()
{
    freopen("SUM.INP","r",stdin);
    freopen("SUM.OUT","w",stdout);
    cin>>a1>>b1;
    a2=(long) a1; if(a1==a2) a2--;
    b2=(long) b1;
    s1=b2;
    s2=b2+1;
    s3=2*b2+1;
    if(s1%2==0) s1/=2; else s2/=2;
    if(s1%3==0) s1/=3;
    else if(s2%3==0) s2/=3;
    	 else s3/=3;
    tg=(s1*s2)%1000000007;
    tg=(tg*s3)%1000000007;
    s1=a2;
    s2=a2+1;
    s3=2*a2+1;
    if(s1%2==0) s1/=2;  else s2/=2;
    if(s1%3==0) s1/=3;
    else if(s2%3==0) s2/=3;
    	 else s3/=3;
    tg2=(s1*s2)%1000000007;
    tg2=(tg2*s3)%1000000007;
    kq=tg-tg2;
    if(kq<0) kq+=1000000007;
    cout<<kq;
}
