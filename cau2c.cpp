#include<bits/stdc++.h>
using namespace std;

int  n=4, k=0, countt = 0;
string b[4];

void in(){

 int i; countt++;
 printf("\n Tap thu %d:", countt);

 for (i = 1; i <= k; i++){
  printf("%s", b[i]);
 }
 }

void Try(int i){
 int j;
 for (j = b[i - 1] + 1; j <= (n - k + i); j++){
  B[i] = j;
  if (i == k) in();
  else Try(i + 1);

 }

}

int main(){
    b[1]="a";b[2]="b";b[3]="c";b[4]="2";
 Try(1);
}
