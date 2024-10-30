#include<bits/stdc++.h>
using namespace std;

void sieve(int N) {
    bool isPrime[N+1];
    for(int i = 2; i <= N;++i) {
        isPrime[i] = true;
    }

    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
}



