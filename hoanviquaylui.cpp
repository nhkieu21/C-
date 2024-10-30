#include<bits/stdc++.h>
using namespace std;
int n,x[10001],b[10001]={0};

void Try (int i)
{
    int j,h;
    for (j=1; j<=n; j++)
    {
        if (!b[j])
        {
            x[i]=j; b[j]=1;
            if (i==n)
            {
                for (h=1; h<=n; h++)
                {
                    cout<<x[h];
                }
                cout<<"\n";
            }
            else  Try(i+1);
            b[j]=0;
        }
    }

}
int main ()
{
    cin>>n;
    Try(1);
}
