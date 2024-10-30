#include<bits/stdc++.h>
using namespace std;
bool Perfect(int n)
{
    int i,s=0;
    for (i=1;i<=n/2;i++)
    {
        s+=i;
    }
    if (s==n)
    {
        return true;
    } else {return false;}
}
int main()
{
    int n;
    cin>>n;
    if (Perfect(n))
    {
        cout<<n<<" la so hoan thien";
    } else {cout<<n<<" khong la so hoan thien";}
}
