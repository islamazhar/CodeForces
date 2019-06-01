//
// Created by Mazharul Islam on 2019-05-17.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <math.h>
#include <vector>

#define LL long long
#define MAXN 100000007
bool isPrime[MAXN];
using namespace std;
vector<LL>primes;
LL gcd(LL a, LL b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

LL lcm(LL a, LL b) {
    LL aa = max(a,b);
    LL bb = min(a,b);
    return (aa* bb)/gcd(aa,bb);
}


LL diversors( LL num) {
    LL res = 1;
    for(LL ii = 0; ii <= sqrt(num)  && ii < (int)primes.size(); ii++) {
        int d = 0;
        while(num%primes[ii]==0) {
            d++;
            num = num/primes[ii];
        }
        res*= (d+1);
    }
    if(num !=1) res*=2;
    return res;
}

void seive() {
    for(int i=2;i<MAXN;i++) {
        if(isPrime[i] == 0) {
            primes.push_back(i);
            for(int j=i+i;j<MAXN;j+=i){
                isPrime[j] = 1;
            }
        }
    }
}
int main(void) {
    LL t,n,d, miniD, maxiD;
    seive();
    //cout << primes.size() << endl;
    cin >> t;
    while( t-- ) {
        cin >> n;
        miniD = LONG_LONG_MAX;
        maxiD = LONG_LONG_MIN;
        LL x  = 1;
        for(int i=0;i<n;i++) {
            cin>>d;
            miniD = min(miniD, d);
            maxiD = max(maxiD, d);
            x = lcm(x,d);
        }
        if( x == maxiD) {
            x *= miniD;
        }

        LL k = diversors(x);
        //cout << k <<endl;
        if( k-2 == n) {
            cout << x << endl ;
        }
        else {
            cout << "-1" << endl;
        }
    }
    return 0;
}