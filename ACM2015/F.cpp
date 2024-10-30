#include<bits/stdc++.h>
using namespace std;
long long a[100001],t,x,k,h,dem;
int n;
int main ()
{
    cin>>h;
    while (h--)
    {

        cin>>n>>k;
        t=k/n;
        int j=0;
        dem=0;
        for (int i=1; i<=n; i++)
        {
            cin>>x;
            if (x>t)
            {
                j++;
                a[j]=x-t;
            }
        }

        t=k%n;

        for (int i=t+1; i<=j; i++)
            {
                dem++;
                cout<<a[i]<<" ";
            }
            for (int i=1; i<=t; i++)
            {
                if (a[i]>1) {dem++;cout<<a[i]-1<<" ";}
            }
            if (dem==0) {cout<<-1;}
            cout<<endl;


    }
}
