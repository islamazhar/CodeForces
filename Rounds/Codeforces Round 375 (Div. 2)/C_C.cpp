/*
 * Mazharul Islam , BUET
 * Problem Link:
 */

using namespace std;
#include <bits/stdc++.h>

#define foreach(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)
#define rep(i,a,n) for(__typeof(n) i=a; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define write(x) freopen(x,"w",stdout);
inline void read() {
#ifdef Mazharul
    freopen("/home/mazharul/in.in","r",stdin) ;
#endif
}

#define all(x) x.begin(),x.end()
#define sz(x) ((long long)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
#define clr clear()
#define inf (1<<62)
#define ins insert
#define ff first
#define ss second
#define eps 1e-9
#define endl "\n"

typedef long long  Long ;
typedef unsigned long long ULong;
typedef string ST;
typedef vector<Long> vi;
typedef vector<ST> vs;
typedef map<Long,Long> mii;
typedef map<ST,Long> msi;
typedef set<Long> si;
typedef set<ST> ss;
typedef pair<Long,Long> pii;
typedef vector<pii> vpii;


/// ********* debug template bt Bidhan Roy *********

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define deb(x) cerr << #x << " = " << x << endl;
#define MAXN 2000000
Long arr[MAXN] ,cnt[MAXN] ,arr2[MAXN];
int main(void){
    ios_base::sync_with_stdio(0) ; cin.tie(0);
    read() ;
    int n ,m;

    cin>>n>>m ;

    rep(i,0,n){
        cin>>arr[i] ;
        arr2[i]=arr[i] ;
        if(arr[i]>m) arr[i]=m+1 ;
    }
    rep(i,0,n){
        cnt[arr[i]]++ ;
    }
   // cout<<cnt[3]<<endl ;
    int last=0 ,changes=0;
    rep(i,1,m+1){
        if(cnt[i]>=n/m) continue ;
        //cout<<i<<" "<<endl ;
        rep(j,last,n+1){
            if((arr[j]>m && cnt[arr[j]]>0) || (cnt[arr[j]]-1)>=(n/m) ){
                  //  cout<<i<<" "<<cnt[arr[j]]<<endl ;

                changes++ ;
                cnt[i]++ ;
                cnt[arr[j]]-- ;
                arr[j]=i ;
                //cout<<cnt[arr[j]]<<endl ;
                last=j ;
                if(cnt[i]==n/m) break ;
            }
            last=j ;
        }
        last++ ;
    }
    cout<<n/m<<" "<<changes<<endl ;
    rep(i,0,n) {
        if(arr[i]<=m) cout<<arr[i]<<" " ;
        else cout<<arr2[i]<<" " ;
    }
    return 0 ;
}

