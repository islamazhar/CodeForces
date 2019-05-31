//
// Created by Mazharul Islam on 2019-05-31.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define  MAXN 300000
vector<int>counts[MAXN];

int main(void) {
    int n, m, x, y;
    scanf("%d %d",&n,&m);

    int one[2];
    for(int i=0;i<m;i++) {
        scanf("%d %d",&x,&y);
        counts[x].push_back(y);
        counts[y].push_back(x);
        one[0] = x;
        one[1] = y;
    }
    for(int i=0;i<2;i++){
        for(int j=1;j<=n;j++){
            // one[i] j
            if(j == one[i]) continue;
            int total = counts[one[i]].size() + counts[j].size();

            for(int k=0; k < counts[j].size() ; k++) {
                if(one[i] == counts[j][k]){
                    total--;
                }
            }
            // cout << one[i] <<" "<<total <<endl;
            if(total == m) {
                printf("YES");
                return 0;
            }
        }

    }
    printf("NO");
    return 0;
}