#include<bits/stdc++.h>
using namespace std;
int i,n,a[10001],d=0;
void Tower(char a, char b, char c, int n)
{
    if(n == 0) return;
    Tower(a, c, b, n-1);
    cout << a << " -> " << c << "\n";
    Tower(b, a, c, n-1);
}
int main ()
{
    cin>>n;
    Tower('a', 'b', 'c', n);
}
