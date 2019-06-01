#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
int main(void) {
    i64 i,j;
    cin>>i>>j;
    i64 k=min(i,j),res=k;
    while(k--!=1 ){
        res *=k ;
    }
    cout << res << endl ;
    return 0;
}
