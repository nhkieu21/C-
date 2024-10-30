#include<bits/stdc++.h>
using namespace std;
long long t,c,j,n,a[1000001],b,h,l;
int main ()
{

    cin>>c;
    while (c--)
    {
        long long s=0;
        cin>>l;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        long long kq=s;
        for (int i=1;i<=s/2;i++)
        {
            if (s%i==0)
            {
                bool k=true;
                j=1;
                h=0;
                while (j<=n && k==true)
                {
                    h=h+a[j];
                    if (h==i)
                    {
                        h=0;
                    } else if (h>i) {k=false;}
                    j++;
                }
                if (j>n && k==true) {kq=i;break;}
            }
        }

        cout<<l<<" "<<kq<<endl;
    }


}
