#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) (long long)(v.size())
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e9
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
    string s ;
    cin >> s;
    if (!((s[SZ(s)-1] - '0')&1)) cout << 0 ;
    else if (!((s[0]- '0')&1)) cout << 1 ;
    else {
        for( int i = 1 ; i < SZ(s)-1 ; i++ ) {
            if (!((s[i]-'0')&1)) return void ( cout << 2 );
        }
        cout << -1 ;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
     cin >> exe;
    while (exe--){
        accepted();
         cout << "\n" ;
    }
    return 0;
}
