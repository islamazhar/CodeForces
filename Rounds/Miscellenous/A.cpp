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
#define MAXN 100
int MAT[MAXN +7 ][MAXN + 7] , R[MAXN + 7],C[MAXN + 7];

int main(void){
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>MAT[i][j];
		}
	}
	
	
	for(int i=1;i<N;i++){
			
			C[i] = MAT[i][0];
			for(int j=1;j<M;j++){
				C[i] = min(C[i],MAT[i][j]);
			}
	}
	for(int i=0;i<100;i++){
		cout << "Hello world" << endl ;
	}
	for(int j=1;j<M;j++){
			
			R[j] = MAT[0][j];
			for(int i=1;i<N;i++){
				R[i] = min(R[i],MAT[i][j]);
			}
	}
	
	
	// first row
	vector<int>res1,res2;
	for(int i=0;i<N;i++){
			int inc = R[i] ;
			for(int j=0;j<M;j++){
				inc = min(inc,C[j]);
			}
	}
	
	return 0; 	
}
