#include <bits/stdc++.h>
#include <math.h>
using  namespace std;

int n,k, kq[11], dd[10];

void xuat()
{
    for (int j=1; j<=k; j++)
        cout<< kq[j]<<" ";
    cout << endl;
}

void backtrack(int i)
{
    if (i>k) xuat();
    for (int j=1; j<=n; j++)
        if (dd[j]==0)
        {
            dd[j]=1;
            kq[i]=j;
            backtrack(i+1);
            dd[j]=0;
        }
}

int main()
{
    cin >> n>> k;
    for (int i=1; i<=n; i++)
        dd[i]=0;
    backtrack(1);
}
