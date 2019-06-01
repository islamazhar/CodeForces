//
// Created by Mazharul Islam on 2019-05-13.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <stdlib.h>
#include <math.h>

using namespace std;
struct Element {
    int cnt;
    int pos;
    double weight;
    char ch;
    bool operator < (const Element&e) const{
        if(cnt != e.cnt) return 1;
        if( (e.weight - weight) < 0.00001){
            return 1;
        }
        else if( (e.weight - weight) > 0.00001){
            return 0;
        }
        else return pos<e.pos;
    }
};
vector<Element>arr1, arr;
double d = 5;
vector<double>chaoticSeq, chaoticSeq1;

struct Ele {
    int x,y,z;
    // zo = x
    // y =

};



int main(void) {


    // string encodingStrings [] = {"00", "11", "01", "10"};
   // string s = "ababbababaccdda";
    FILE *fp = fopen("out.txt", "w");
    if(fp == NULL) {
        cout << "can not open the file\n";
    }
    fprintf(fp,"x,y,z\n");
    for(double W = 2;W<=2;W++) {
        double w = W;
        for (double Z = 0.3; Z < 0.9; Z += 0.1) {
            double z = Z;
            chaoticSeq.clear();
            arr.clear();
            int ii = 0;
            int d = 1;
            while (d <= 10) {
                if(ii %4 == 0){
                    fprintf(fp,"%lf,%d,%lf\n", Z,d,z);
                    d++;
                }
                ii++;
                z = cos(w * acos(z));
            }
        }
    }
    fclose(fp);

    /*
        int ii = 0;
        for(int i=0;i<4;i++) {
                Element e;
                e.cnt = 0;
                e.pos = -1;
                e.ch = 'a' + i;
                e.weight = chaoticSeq[ii];
                ii +=d;
                arr.push_back(e);
        }
        for(int i=0;i<s.length();i++){
                // finding the rank
                for(int j=0;j<4;j++) {
                    if(arr[j].ch == s[i]) {
                        cout << encodingStrings[j] << "|" ;
                        arr[j].cnt ++ ;
                        arr[j].pos = i;
                        break;
                    }
                }
                sort(arr.begin(), arr.end());

        }
        cout << endl ;
        cout <<"----------------------------------------------" << endl ;
    }
    */

    return 0;
}
