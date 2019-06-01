//
// Created by Mazharul Islam on 2019-06-01.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


#define MAXN 300005
int arr[MAXN], n, m;

int distance(int a, int b) {
    if(b < a) {
        return m-a+b;
    }
    else b-a;
}

bool F(int moves)
{

    int last = 0;
    // int last1 = 0;
    for(int i=0;i<n;i++) {
        // arr[i].... arr[i] + moves.......m
        //cout << i << " " <<last << endl;
        if(arr[i]  + moves < m) {
            if(arr[i]+moves >= last) {
                // last >= arr[i]
                // last >= arr[i-1]
                // distance (last and arr[i] ) should be min
                last = max(last, arr[i]);
            }
            else {
                return 0;
            }
        }
        // arr[i] ....m..0...(moves-m+arr[i])
        else {
            if(moves-m+arr[i] < last) {
                   last = max(arr[i],last);
            }
            else {
                last = last;
            }
        }
    }
    return 1;
}

int main(void)
{
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int lo = 0;
    int hi = INT_MAX;
    int mid ;
    // cout << F(0) << endl;

    while(lo < hi) {
        mid = lo + (hi-lo) / 2;
        //cout << lo << " " << hi << " " << mid << endl;
        if(F(mid)) {
            hi = mid;
        }
        else {
            lo = mid+1;
        }
    }
    printf("%d\n",hi);

    return 0;
}