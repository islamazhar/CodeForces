#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    char operations[101];
    scanf("%d %s",&n,operations);
    int cur = 0;
    for(int i=0;i<(int) strlen(operations);i++) {
            if(operations[i] == '-') cur--;
            else cur++;
            if(cur<0) cur = 0;
    }
    printf("%d\n",cur);
}
