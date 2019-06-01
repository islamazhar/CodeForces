//
// Created by Mazharul Islam on 2019-05-16.
//
//#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>

#define LL long long
#define MAXN 100007
using namespace std;
LL n,m;
LL boys[MAXN], girls[MAXN];

int main(void) {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }
    sort(boys, boys + n);
    sort(girls, girls + m);

    if (girls[0] < boys[n - 1]) {
        cout << "-1\n";
        return 0;
    }


    LL res = 0;
    for (int i = 0; i < n; i++) {
        res += m * boys[i];
    }
    for (int i = m - 1; i >= 1; i--) {
        res += (girls[i] - boys[n - 1]);
    }
    if (boys[n - 1] < girls[0]) {
        res += (girls[0] - boys[n - 2]);
    }
    cout << res << endl ;
}


