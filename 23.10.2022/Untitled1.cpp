#include<iostream>
#include<algorithm>
using namespace std;
void ss( int a[],int l,int r){
	sort(a+l,a+r+1);
	cout<<a[(l+r)/2]<<endl;
}
int main(){
	int n,q;
	cin>>n>>q;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	while(q--){
		int l,r;
		cin>>l>>r;
	    ss(a,l,r);
	    for(int i=1;i<=n;i++){
		   a[i]=b[i];
	    }
	}
	
}
