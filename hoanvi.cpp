#include <bits/stdc++.h>
using namespace std;
long long s[1000],n,k,dem=0,m,i,j;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)  s[i]=i;
    m=n;
    while(m!=0)
    {   
	for(i=1; i<=n; i++) cout<<s[i]<<" ";
        cout<<"\n";
        m=0;
        for(i=n; i>1; i--)
        {   
	    if(s[i-1]<s[i])
            {   m=i-1;
                break;
            }
        }
        for(i=n; i>=1; i--)
        {   
	    if(s[m]<s[i])
            {   k=i;
                break;
            }
        }
        swap(s[m],s[k]);
        j=n;
        for(i=1+m; i<=j; i++)
        {   
	    swap(s[i],s[j]);
            j--;
        }
    }
}
