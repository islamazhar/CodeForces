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


int main(void){
	string str;
	cin>>str ;
	//cout << str << endl ;
	int min2 = ((str[0]-'0')*10+str[1]-'0')*60+(str[3]-'0')*10+str[4]-'0';
	//cout << min2 << endl ;
	int res= 1000000000 ;
	for(int  i=0;i<=1440;i++){
		int m1 = (i%60)/10 ;
		int m2 = (i%60)%10 ;
		
		int h1 = (i/60)/10 ;
		int h2 = (i/60)%10 ;
		
		if(h1 == m2 && h2 == m1){
			if(i>=min2) res = min(res,i-min2) ;
			else{
				res = min(res,1440-min2+i);
			}
		}
	}
	
	cout << res << endl ;
	return 0; 	
}
