#include<bits/stdc++.h>
using namespace std;
int a[10];
long long kt ()
{
    int i,d=0;
    if (a[1]<a[2])
    {
        for (i=3; i<=8; i++)
        {
            if (a[i]<a[i-1])
            {
                d++;
                break;
            }
        }
        if (d==0)
        {
            return 2;
        }
        else return 3;
    }
    else
    {
        for (i=3; i<=8; i++)
        {
            if (a[i]>a[i-1])
            {
                d++;
                break;
            }
        }
        if (d==0)
        {
            return 1;
        }
        else return 3;
    }
}
int main ()
{
    int i;
    for (i=1; i<=8; i++)
    {
        cin>>a[i];
    }
    if (kt()==1)
    {
        cout<<"descending";
    }
    else if (kt()==2)
    {
        cout<<"ascending";
    } else {cout<<"mixed";}
}
