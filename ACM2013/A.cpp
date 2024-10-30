#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a[100],j;
    cin>>n;
    while (n--)
    {
        cin>>j;
        for (int i=1;i<=10;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+11);
        cout<<j<<" "<<a[8]<<"\n";
    }
}
