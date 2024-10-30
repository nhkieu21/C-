#include <bits/stdc++.h>

using namespace std;

main()
{
    int t,n;
    double sum=0.0;
    cin>>t;
    for(int j=1; j<=t; j++)
    {
        cin>>n;
        sum=1.0/(n+1);
        if ((n+1)%3==0)
        {
            printf("%.3f\n",sum*10e9);
        } else if ((n+1)%2==0 || (n+1)%5==0)
        {
            printf("%.1f\n",sum*10e9);
        }
        else
        {
            printf("%.6f\n",sum*10e9);
        }

    }


}


