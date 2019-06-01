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
int distance(int a,int b){
    if(a>b) return INT_MAX;

}
int F(int pos, int state) {
    if(pos ==n) return 0;
    int prev = arr[pos-state]%n;
    int val1 = max(distance(prev,arr[pos]),F(pos+1,0));
    int val2 = max(distance(arr[pos],prev), F(pos+1,1));
    return min(val1, val2);
}

int main(void) {

    arr[0] = -1;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    F(1,0);

}