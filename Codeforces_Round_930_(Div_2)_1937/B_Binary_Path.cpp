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
    int n;
    cin>> n;
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    string str = s1[0] + s2;
    string mn = s1[0] + s2;
    // cout << mn << '\n';
    int cnt =1;
    for( int i = 1 ; i < s1.size() ; i++ ){
        if(mn[i] < s1[i]) break;
        if(mn[i] > s1[i]) cnt = 1 , mn[i] = s1[i];
        else cnt++;
        // cout << mn << " " << cnt << "\n" ;
    }
    cout << mn << "\n" << cnt ;
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
