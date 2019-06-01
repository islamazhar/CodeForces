//
// Created by Mazharul Islam on 2019-05-10.
//
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>

#define MAXH 200000

int cnt[MAXH];
int freq[MAXH];

using namespace std;

int main(void) {
    int n, num, res = 0, m = 0;
    scanf("%d",&n);


    int nn = -1;
    int maxi = -1;
    for(int i=0;i<n;i++) {
        scanf("%d",&num);
        if(freq[num] == 0 ) {
            if ( m==0 ) nn = num;
            m++;
        }
        else {
            cnt[freq[num]] --;
        }

        freq[num] ++ ;

        cnt[freq[num]] ++ ;
        maxi = max(maxi,freq[num]);
        if(m==i+1){ // all unique numbers
            res = max(res,i+1);
        }
        if(cnt[maxi]*maxi == i){ // this num has occured for the first time delete it and get a valid seq
            res = max(res,i+1);
        }
        if(cnt[freq[num]] == 1 && cnt[freq[num]-1] == m-1){
            res = max(res,i+1);
        }

        if(cnt[freq[num]+1] == 1 && cnt[freq[num]] == m-1){
            res = max(res,i+1);
        }

    }

    cout << res << endl;

    return 0;
}
