#include <bits/stdc++.h>
#define LL long long
using namespace std;
struct Element {
    LL idx;
    LL val;
    bool operator < (const Element &p) const {
        if(val != p.val ) return val <p.val;
        else return idx < p.idx;
    }
};
Element e;
vector<Element> arr;
int main(void) {
    LL n, val;
    cin >> n;
    for(LL i = 0; i < n; i++) {
        cin >> val;
        e.val= val;
        e.idx = i+1;
        arr.push_back(e);
    }
    sort(arr.begin(), arr.end());
    /*
    for(int i=0;i<n;i++) {
        cout << arr[i].idx << " " <<arr[i].val << endl;
    }
    */
    LL res = LONG_LONG_MAX;
   // cout << res << endl;
    set<LL>indexxs;
    set<LL>::iterator it;
    for(int i=1;i<=n;i++) {
        indexxs.insert(i);
    }
    /*
    for(it=indexxs.begin();it!=indexxs.end();it++) {
        cout << *it << endl;
    }
    */

    for(int i=0;i<n-1;i++){
            it = indexxs.find(arr[i].idx);
            indexxs.erase(it);
            LL k1 = *indexxs.begin();
            it = indexxs.end(); it--;
            LL k2 = *it;
            //cout << k1 << " " << k2 << endl ;
            LL k = max(abs(arr[i].idx-k1), abs(k2 - arr[i].idx));
            //printf("%d %d\n",arr[i],k);
            res = min(res, arr[i].val/k);
    }
    cout << res << endl ;
}
