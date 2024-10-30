#include<iostream>
using namespace std;
int vc=20000;
int D[6][6]={{vc,7,vc,2,vc,vc},
			 {vc,vc,4,vc,1,vc},
			 {vc,vc,vc,vc,vc,3},
			 {vc,4,vc,vc,vc,vc},
			 {2,vc,2,vc,vc,vc},
			 {vc,1,vc,vc,vc,vc}};
int main()
{
	int n=6;
	cout<<"Ma Tran DO"<<endl;
	for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
			cout<<D[i][j]<<" ";
		cout<<endl;
		}
	cout<<endl;
	for(int k=0;k<n;k++)
		{
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(D[i][j]>D[i][k]+D[k][j])
				D[i][j]=D[i][k]+D[k][j];

		cout<<"Ma tran D"<<k+1<<endl;
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
			cout<<D[i][j]<<" ";
		cout<<endl;
		}
		cout<<endl;
		}

}
