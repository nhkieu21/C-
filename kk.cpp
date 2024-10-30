
#include<bits/stdc++.h>
using namespace std;

/*bool kt(string s)
{
    long long i,d;
    i=0;
    d=0;
    while (i<s.size()-1)
    {
        switch(s[i])
        {
            case 'A': d=d+10*16;break;
            case 'B': d=d+11*16;break;
            case 'C': d=d+12*16;break;
            case 'D': d=d+13*16;break;
            case 'E': d=d+14*16;break;
            case 'F': d=d+15*16;break;
        }
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
}*/
int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}
int main()
{
    string s1,s2;

    binaryToDecimal(12);
}

