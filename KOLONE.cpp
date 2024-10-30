#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    long long a,b,c,i,h,t;
    string s1,s2,s3;
    s3.empty();
    cin>>a>>b;
    cin>>s1>>s2;
    cin>>c;
    c++;
    h=a+b;

    for (i=a-1;i>=0;i--)
    {
        s3=s3+s1[i];
    }
    s3=s3+s2;
    t=0;
    i=0;
//    cout<<s3;
    while (i<=h && t<h)
    {
        if (a==b && c>1) {cout<<s3[i];t++;}
        i=i+c;
        if (i>=h) {i=i-h;}
        if (s3[i]==1)
        cout<<s3[i];
        t++;
    }

}
