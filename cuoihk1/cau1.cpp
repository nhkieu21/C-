#include<bits/stdc++.h>
using namespace std;
int n,x[1000];

void init (int i)
{
    int j,h;
    for (j=0; j<=1; j++)
    {
        x[i]=j;
        if (i==n)
        {
            for (h=1; h<=n; h++)
            {
                cout<<x[h];
            }
            cout<<"\n";
        }
        else  init(i+1);
    }

}
int main ()
{
    cin>>n;
    init(1);
}
