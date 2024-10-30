#include<bits/stdc++.h>
#include<string.h>
using namespace std;
char Lower(char c)
{
    if(c>=65 && c<=90)
         c=c+32;
    cout<<c;
}
int main()
{
    char s[25];
   int i;

   cin>>s;
   for(i=0;i<=strlen(s);i++)
   {
      Lower(s[i]);
   }
}
