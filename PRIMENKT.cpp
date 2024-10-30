#include<bits/stdc++.h>
using namespace std;
int i,d,n,t,k,l;
int nto(int l)
{
    i=2;
    while (i<=l)
    {
        while (l%i==0)
        {
            l=l/i;
            if (l%i==0)
            {
                return 0;
            }
        }
        i++;
    }
    return 1;
}
int main ()
{
    freopen("PRIMENKT.INP","r",stdin);
    freopen("PRIMENKT.OUT","w",stdout);

    cin>>t;
    for (int h=1; h<=t; h++)
    {
        cin>>n>>k;
        while (n%k!=0)
        {
            n--;
        }
        while (n>1)
        {
            if ((nto(n)==1)&&(n%k==0))
            {
                cout<<n<<"\n";
                break;
            } else {n--;}
        }
        if (n==1){cout<<-1;}

    }

}
