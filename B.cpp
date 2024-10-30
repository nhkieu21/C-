#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long a,b,v,d;
     d=0;
        cin>>a>>b>>v;
        while (v>0)
        {
            v=v-a;
            d++;
            if (v>0)
            {
                v=v+b;
                d++;
            }
        }
        if (d%2==0)
        {
            cout<<d/2<<"\n";
        }
        else
        {
            cout<<d/2 +1<<"\n";
        }
}

