
#include<bits/stdc++.h>
#include<string>

using namespace std;

long long kt(string s)
{
    long long i,d,tam=0;
    i=0;
    d=0;
    while (i<s.size()-1)
    {
        if (s[i]<=9)
        {
            if (9<=s[i-1]<=0)
                {tam=0;}
            tam=tam*16+(int)s[i];
            d=d+tam*16+(int)s[i];
        }
        else
        {switch(s[i])
        {
            case 'A': d=d+10*16;break;
            case 'B': d=d+11*16;break;
            case 'C': d=d+12*16;break;
            case 'D': d=d+13*16;break;
            case 'E': d=d+14*16;break;
            case 'F': d=d+15*16;break;
        }}
        i++;
    }
    if (i=s.size()-1)
    {
        switch(s[i])
        {
            case 'A': d=d+10;break;
            case 'B': d=d+11;break;
            case 'C': d=d+12;break;
            case 'D': d=d+13;break;
            case 'E': d=d+14;break;
            case 'F': d=d+15;break;
        }
    }
    return d;
}
long long Dec2Bin(long long decimalNumber) // Ctrl H => find & replace
{
    long long binaryNumber = 0;
    long long p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

int main()
{
    string s1,s2,h,k;
    long long n,m,i,dem=0;
    cin>>s1>>s2;
    //getline(cin,s2);
    n=Dec2Bin(kt(s1));
    m=Dec2Bin(kt(s2));
    h=to_string(n);
    k=to_string(m);
    /*for (i=0;i<=k.size()-h.size();i++)
    {
        if ((int)k.find(h)>=0)
        {
            dem++;
        }
    }
    cout<<dem;*/
    cout<<h<<" "<<k;
}
