#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,C[100];
    cin>>n>>k;
    for (int i = 1; i <= k; i++)
        C[i] = i;
    int i, j;
    i = k;
    while (i > 0 && C[i] == n - k + i)
        i--;
    if (i > 0)
    {
        C[i] = C[i] + 1;
        for (j = i + 1; j <= k; j++)
            C[j] = C[i] + j - i;
    }
    else
    {
        for (i = 1; i <= k; i++)
        printf("%3d", C[i]);
    }
}
