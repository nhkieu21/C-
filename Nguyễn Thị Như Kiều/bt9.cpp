#include<bits/stdc++.h>
using namespace std;
void Toigian(int a,int b,int &Tu,int &Mau)
{
    if (a<0 && b<0)
    {
        return Toigian(-a,-b,Tu,Mau);
    }
    else if (a<0 && b>0)
    {
        return Toigian(-a,b,Tu,Mau);
    }
    else if (a>0 && b<0)
    {
        return Toigian(a,-b,Tu,Mau);
    }
    while (a!=b)
    {
        if (a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    Tu/=a;
    Mau/=a;
    if (Mau<0)
    {
        cout<<-Tu<<" "<<-Mau;
    }

    else
    {
        cout<<Tu<<" "<<Mau;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    Toigian(a,b,a,b);
}
