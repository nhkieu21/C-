#include<bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("CANARIUM.INP","r",stdin);
    freopen("CANARIUM.OUT","w",stdout);
    ios::sync_with_stdio(0); cin.tie(0);
    int t,m,n;
    long long k;

    cin>>t;
    while (t--)
    {
        cin>>k;
        m=1;
        n=2*(k-1)/3;
        int kq1=0,kq2=0;
        while (m<n)
        {
            int tam=(n*m +(n+1)*(m+1))/2;
            if (k>tam)
            {
                m++;
            }
            else if (k<tam)
            {
                n--;
            }
            else
            {
                if ((n-m)%2==1)
                {
                    kq1=m;
                    kq2=n;
                }
                m++;
                n--;
            }

        }
        if (kq1==0)
        {
            cout<<"-1 -1\n";
        }
        else
        {
            cout<<kq1<<" "<<kq2<<"\n";
        }
    }
}
