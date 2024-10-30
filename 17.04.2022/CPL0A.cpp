#include<bits/stdc++.h>
using namespace std;

struct toado
{
	long long x,y;
};

double dientich (toado A, toado B, toado C)
{
	return abs(B.x*A.y - A.x*B.y + C.x*B.y - B.x*C.y + A.x*C.y - C.x*A.y);
}

bool kt (toado P, toado A, toado B, toado C)
{
	return dientich(A,B,C)==dientich(P,B,C)+ dientich(P,A,B) + dientich(P,A,C);

}

int main()
{
    long long n,i,dem;
    toado A,B,C,P;
    cin>>A.x>>A.y;
    cin>>B.x>>B.y;
    cin>>C.x>>C.y;

    cout <<fixed<< setprecision(1)<<dientich(A,B,C)/2<<"\n";;

    cin>>n;
    dem=0;
    for (i=1;i<=n;i++)
    {
        cin>>P.x>>P.y;
        if (kt(P,A,B,C))
        {
            dem++;
        }
    }
    cout<<dem;
}
