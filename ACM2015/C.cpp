#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,t;
    long long p;

    cin>>t;
    while(t--)
    {
        cin>>p;
        if (p<=9)
        {
            cout<<p<<endl;

        }
        else
        {
            int k=0,a[10000];
            //k.clear();
            for (i=9; i>=2; i--)
            {
                while  (p%i==0)
                {
                    k++;a[k]=i;
                    p=p/i;
                }

            }
            if (p>=10)
            {
                cout<<-1<<endl;
            }
            else
            {
                sort(a+1,a+1+k);
                for (int i=1;i<=k;i++)
                {
                    cout<<a[i];
                }
                cout<<endl;
            }
        }

    }

}
