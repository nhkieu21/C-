#include<bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("LEAPYEAR.INP","r",stdin);
    freopen("LEAPYEAR.OUT","w",stdout);
    int i,l,r,dem=0;
    cin>>l>>r;
	for(i=l;i<=r;i++)
	{
		if(i%19==3||i%19==6||i%19==9||i%19==11||i%19==14||i%19==17||i%19==0) dem++;
	}
	cout<<dem;
}
