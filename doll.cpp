#include<bits/stdc++.h>
using namespace std;
long long a[1000001],x[1000001],d[1000001];
int main ()
{
    long long n,k,tam,i,kq,dem,h,t;
    cin>>n>>k;
//    kq=0;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        x[i]=1;
    }
    sort (a+1,a+1+n, greater<long long> ());
    dem=1;
    kq=0;
    t=a[dem];
    while (dem<=n)
    {
        kq=kq+a[dem];
        for (i=dem+1;i<=n;i++)
        {
            if (a[i]<=t-k && a[i]!=0)
            {
                t=a[i];
                a[i]=0;
            }
        }
        dem++;
        while (a[dem]==0)
        {
            dem++;
        }

        t=a[dem];
        //cout<<kq<<" ";
    }
//    dem=1;
//    kq=a[dem];
//    while (dem<=n)
//    {
//        if (a[dem]!=0)
//        {
////            kq=kq+a[dem];
//
//            t=a[dem];
//            for (i=dem+1; i<=n; i++)
//            {
//                if (a[i]<=t-k)
//                {
//                    t=a[i];
////                    dem=i;
//                    a[i]=0;
//                } else {kq=kq+a[i];}
//            }
////            dem=t+1;
//            cout<<kq<<" ";
//        }
//        dem++;
//    }

    cout<<kq;
}
