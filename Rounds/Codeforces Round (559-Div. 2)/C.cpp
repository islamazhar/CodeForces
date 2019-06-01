#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>

#define LL long long
#define MAXN 1000000
using namespace std;
LL n,m;
LL boys[MAXN], girls[MAXN];
int main(void) {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> boys[i];
    }
    for(int i=0;i<m;i++) {
        cin >> girls[i];
    }
    sort(boys,boys+n);
    sort(girls,girls+m);
    for(int i=0;i<n;i++) {
     if(girls[0] < boys[i]){
        cout << "-1\n";
        return 0;
     }
    }

    int res = 0;
    int j=m-1;
    for(int i=n-1;i>=0;i--) {
        if(j>=0){
            res += (girls[j]-boys[i]);
            j--;
            while(j>=0 && girls[j]>boys[i]) j--;
        }
        res += m*boys[i];
    }
    printf("%d\n", res);
}
