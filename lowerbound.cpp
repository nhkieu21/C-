#include<bits/stdc++.h>
using namespace std;
int n,m,a[10000],k;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    sort(a+1,a+1+n);
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>k;
        int x;
        lower_bound(a+1,a+n+1,k)-a;
        cout<<a[x]<<"\n";

    }
    int myints;
    vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

    sort (v.begin(), v.end());                // sorted arr: 10 10 10 20 20 20 30 30

    vector<int>::iterator low,up;
    low= lower_bound (v.begin(), v.end(), 20); //          ^
    up= upper_bound (v.begin(), v.end(), 20); //                   ^

    cout << "lower_bound at position " << (low- v.begin()) << '\n';
    cout << "upper_bound at position " << (up - v.begin()) << '\n';

    return 0;
}
