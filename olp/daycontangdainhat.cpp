#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
int main ()
{
    int n,m,x;
    cin>>n>>x;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int ans = 0, sum = 0;
    for (int l = 1, r = 1; r <= n; r++)
    {
        sum += a[r];
        while (sum > s)
        {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans;
}
