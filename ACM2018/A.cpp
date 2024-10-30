#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, a[501];
    long long sum=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a+1,a+1+n);
    cout<<setprecision(6)<<fixed;
    cout<<(double)sum/n<<endl;
    if (n%2==1) cout<<(double)a[n/2+1];
    else cout<<(double)(a[n/2]+a[n/2+1])/2;
}
