//
// Created by Mazharul Islam on 2019-05-11.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <set>

using namespace std;
#define MAXN 200007
set<int>s;
set<int>::iterator it;
char str[MAXN];
int l[MAXN],r[MAXN];


int main(void){
    int testcases,q,t,idx,len,caseno = 1;

    scanf("%d",&testcases);
    while(testcases--){
        s.clear();
        scanf("%s",str);
        len = strlen(str);
        l[0] = 0;
        for(int i=1;i<len;i++){
            l[i] = (str[i] == str[i-1]) ? l[i-1] : i;
        }

        r[len-1] = len-1;

        for(int i=len-2;i>=0;i--){
            r[i] = (str[i] == str[i+1]) ? r[i+1]: i;
        }

        scanf("%d",&q);
        printf("Case %d:\n",caseno++);
        s.insert(-1);
        s.insert(MAXN+1);

        while(q--){

            scanf("%d %d",&t,&idx);
            if(t==1){
                int t1 = l[idx];
                int t2 = r[idx];

                it = s.lower_bound(idx);
                it--;
                //cout << t1 << " " << *it + 1 <<endl;
                t1 = max(t1, *it+1);
                it = s.upper_bound(idx);
                t2 = min(*it-1,t2);
                //cout << t2 <<" "<< t1 << endl;
                printf("%d\n",t2-t1+1);
            }
            else {
                s.insert(idx);
            }
        }
    }


    return 0;
}