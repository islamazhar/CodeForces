#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
#include <map>
#include <algorithm>
#include <stack>
#include <set>
#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
#define MAXN 200000
int arr[MAXN + 7 ];
int main(void){
	freopen("in.txt","r",stdin);
	int n,k,q,l,r ;
	cin>>n>>k>>q;
	for(int i=0;i<n;i++){
		cin>>l>>r ;
		arr[l]++;
		arr[r+1]--;
	}
	for(int i=1;i<=MAXN;i++){
		arr[i] += arr[i-1];
	}
	for(int i=0;i<=MAXN;i++){
		if(arr[i]>=k){
			arr[i]=1;
		}
		else arr[i]=0;
	}
	
	for(int i=1;i<=MAXN;i++){
		arr[i] += arr[i-1];
	}
	while(q--){
		cin>>l>>r ;
		cout << arr[r]-arr[l-1] << endl ;
	}
	
	return 0; 	
}
