#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,n,m,s[10001];
    cin>>n;
    for (i=1; i<=n; i++)    s[i]=0;
    while (m!=0)
    {   
        for (i=1; i<=n; i++)    cout<<s[i]<<" ";
        cout<<"\n";
        for (i=n; i>=0; i--)
        {   
            if (s[i]==0)
            {
                m=i;
                break;
            }
        }
        s[m]=1;
        for (i=m+1; i<=n; i++)  s[i]=0;
    }

//    clock_t t2=clock();
//    cout<<(double)(t2 - t1) / CLOCKS_PER_SEC;
}

