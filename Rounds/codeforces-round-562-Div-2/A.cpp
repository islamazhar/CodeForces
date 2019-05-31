//
// Created by Mazharul Islam on 2019-05-31.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n, a, x, b, y;
    scanf("%d %d %d %d %d",&n,&a,&x,&b,&y);
    int cur1 = a;
    int cur2 = b;
    while(true) {
        if(cur1 == cur2) {
            puts("YES");
            return 0;
        }
        if(cur1 == x || cur2 == y) break;
        if(cur1==n) cur1 = 1;
        else cur1++;

        if(cur2 == 1) cur2 = n;
        else cur2--;
    }
    puts("NO");
    return 0;
}