//
// Created by Mazharul Islam on 2019-06-01.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAXN 300007
int arr[MAXN];
int n,m;
int DP[MAXN][5];
int distance(int a,int b){
    int ret ;
    if(b>a) {
        ret = m-b+a;
    }
    else {
        ret = a-b;
    }
    return ret;
}

int F(int pos, int state, int prev) {
    if(pos == n) return 0;
    if(DP[pos][state] !=-1) return DP[pos][state];
    int val1 = max(distance(prev,arr[pos]),F(pos+1,1,prev)); // change arr[pos] tp prev

    int val2 =  (prev <= arr[pos]) ? F(pos+1,0,arr[pos]): INT_MAX; // keep arr[pos] to arr[pos]
    // cout << val1 << " " << val2 << endl;
    int res = min(val1, val2);
    DP[pos][state] = res;
    return DP[pos][state];
}

int main(void) {

    memset(DP,-1,sizeof(DP));
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int res = F(0,0,arr[0]);
    cout << res <<endl;

}