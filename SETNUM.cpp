#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001];
int main()
{

	long long n,dem=0,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]=0;
	}
	for(i=1;i<=n;i++)
    {
        b[a[i]]++;
        if (b[a[i]]==1) {dem++;}
    }
	cout<<dem;
}
