#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, Min[1000], i, j, n;
    s=11;
    n = 3;
    int v[] = {1, 3, 5};

    Min[0]=0;
    for (i =1; i<= s; i++)
    {
        Min[i]=100;
        for (j=0; j<n; j++)
        {
            if (v[j]<=i && (Min[i-v[j]] + 1 <Min[i]))
                {Min[i] =  Min[i-v[j]] + 1;}
        }
    }
    cout<<Min[s]<<"\n";


}
