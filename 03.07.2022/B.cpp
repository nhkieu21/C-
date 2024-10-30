#include<bits/stdc++.h>
using namespace std;
struct diem
{
    double x;
    double y;
};
double khoangcach(diem d1, diem d2)
{
    double kc;
    kc=sqrt(pow(d1.x-d2.x,2)+pow(d1.y-d2.y,2));
    return kc;
}

int main ()
{
    diem A,B,C,M;
    double xmin,xmax,kq;
    cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
    cin>>M.x>>M.y;
    xmax=max(A.x,max(B.x,C.x));
    xmin=min(A.x,min(B.x,C.x));

    kq=khoangcach(M,A);
    kq=min(kq,khoangcach(M,B));
    kq=min(kq,khoangcach(M,C));
    if (M.x>xmax||M.x<xmin)
    {
        cout<<setprecision(1)<<fixed<<kq;
    }

}
