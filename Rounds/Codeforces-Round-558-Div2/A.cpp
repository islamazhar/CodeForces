//
// Created by Mazharul Islam on 2019-05-10.
//
#include <iostream>
#include <stdio.h>
using namespace std;
int main(void) {
    int n, m, res ;
    scanf("%d %d",&n,&m);
    int n1 = (n+1)/2;
    if(n1<=m) {
        m-=n1;
        res = n/2;
        while(m>0){
            res--;
            m--;
        }
    }
    else {
        if(m == 0) res = 1;
        else res = m;

    }
    cout << res << endl;


}
