#include<bits/stdc++.h>
using namespace std;

string s,s1;
long long a[10000000],f[10000000],d[10000000],ANS=0,l;
map<string,bool> m;
void xuli(string xau)
{
    string xau1=xau;
    while(xau1[0]=='0')
    {
        xau1.erase(0,1);
    }
    if(m[xau1]==false && xau1!="")
    {
        //cout<<xau1<<" ";
        m[xau1]=true;
        ANS++;
        return ;
    }
    else return ;
}
void dq(int i, int tong, string xau)
{
    if(tong%3==0)
    {
        xuli(xau);
    }
    if(i>l) return;
    dq(i+1,tong+a[i],xau+s[i-1]);
    dq(i+1,tong     ,xau       );

}

int main(){
    freopen("COUNT3.INP","r",stdin);
    freopen("COUNT3.OUT","w",stdout);
    cin.ignore('\0');
    cin>>s;
    l=s.length();
    for(int i=0;i<=l-1;i++)
    {
        a[i+1]=s[i]-'0';//array of number
        f[i+1]=f[i]+(s[i]=='0' ? 1 : 0);//the number of 0 at position i
        d[i+1]=d[i]+a[i+1];//array sum of number
    }
    dq(1,0,"");
    //cout<<endl;
    cout<<ANS;
}
