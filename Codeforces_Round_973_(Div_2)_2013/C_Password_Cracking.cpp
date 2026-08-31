#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n;cin >> n;
    string s;
    bool front = false;
    char c='0';
    while (SZ(s)<n) {
        cout << "? ";
        if( front ) cout << c+s;
        else cout << s+c;
        cout << endl ;
        int inp;cin>>inp;
        if(inp) {(front)?s=c+s:s+=c, c = '0';}
        else if ( !inp && c == '0' ) {
            c = '1';
            if ( front ) s = c + s , c = '0' ;
        }
        else if ( !inp && c == '1' ) front = 1 , c = '0' ;
    }
    cout << "! " << s ;
}

signed main() {
    // ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << endl ;
    }
    return 0;
}