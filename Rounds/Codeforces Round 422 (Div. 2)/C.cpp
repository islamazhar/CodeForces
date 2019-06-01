#include <bits/stdc++.h>
using namespace std;
#define MAXN 2*100005
#define pii make_pair
vector<pair<int, int > >vec[MAXN+7];
vector<int>Val[MAXN+7];
int main(void) {

    int n,x,l,r,cost;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>l>>r>>cost;
        vec[x-(r-l+1)].push_back(pii(l,cost));
    }
    for(int i=0;i<=x;i++){
        sort(vec[i].begin(),vec[i].end());
    }
    for(int i=0;i<=x;i++){
        sort(vec[i].begin(),vec[i].end());
    }
    for(int i=0;i<=x;i++){
        vector<int>v(vec[i].size());
        v[vec[i].size()-1] = vec[i][vec[i].size()-1].second;
        for(int j=vec[i].size()-2;j>=0;j--){
                v[j] = min(v[j+1],vec[i][j].second);
        }
    }

    return 0;
}
