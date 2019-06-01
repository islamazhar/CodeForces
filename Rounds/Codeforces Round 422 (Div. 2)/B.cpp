#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str1,str2;
    int n,m,res=1000000000,s;
    cin>>n>>m;
    cin>>str1>>str2;
    for(int i=0;i<=m-n;i++){
        int ret = 0;
        for(int j=0;j<n;j++){
            if(str2[i+j]!=str1[j]){
                ret++;
            }
        }
        //cout << ret << endl ;
        if(res>ret){
            res = ret;
            s = i;
        }
    }
    cout << res << endl ;
    bool blank=0;
    for(int i=0;i<n;i++){
        if(str1[i] != str2[s+i]) {
            if(blank) cout << " ";
            else blank = 1;
            cout << i+1 ;
        }
    }
    cout << endl ;
    return 0;
}
