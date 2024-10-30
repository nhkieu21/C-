#include<bits/stdc++.h>
using namespace std;
int n,x[1000];

void Try (int i)
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
        else  Try(i+1);
    }

}
int main ()
{
    cin>>n;
    Try(1);
//    return 0;
}
