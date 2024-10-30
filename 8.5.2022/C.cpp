#include<bits/stdc++.h>
using namespace std;
long long daonguoc(long long n)
{
    long long k,tam;
    k=n%10;
    n=n/10;
    while (n>0)
    {
        tam=n%10;

        n=n/10;
        k=k*10+tam;
    }
    return k;
}
long long kt(long long a, long long b)
{
    if (b==1)
    {
        return a;
    }
    else
    {
        return kt(a,b-1)+daonguoc(kt(a,b-1));
    }
}
int main ()
{
    long long a,b,i,j,dem,t,n,h;
    cin>>n;
    for (h=1; h<=n; h++)
    {
        cin>>a>>b;
        dem=0;
        for (i=1; i<=b; i++)
        {
            for (j=1; j<=b; j++)
            {
                t=kt(i,j);
                if (t>=a && t<=b)
                {
                    dem++;
                }
            }
        }
        cout<<dem<<"\n";
    }

}
