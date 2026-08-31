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
    ll n , k ;
    cin >> n >> k ;
    map<ll,ll> frq;
    deque<ll> dq;
    for( int i = 0 ; i < n ; i++ ) {
        ll inp;cin>>inp;
        if(!frq[inp]) dq.pb(inp);
        frq[inp]++;
    }
    sort(all(dq));
    ll cans = 0 , blocked = 0 , press = 0 , cnt = 0;
    ll last = -1 , x = -1 ;
    while ( cans < k ){
        cnt = (dq.front()) ;
        if(last != -1 ) cnt -= last ;
        press += cnt * (n-blocked)  ;
        cans  += cnt * (n-blocked)  ;
        if ( last!=-1 ) cans -= frq[last]*cnt , press -= frq[last]*(dq.front()-x), blocked+=frq[last];
        last = dq.front();
        x = last + 1 ;
        dq.pop_front();
        if ( cans > k ) press -= cans - k ;
    }
    cout << press ;
}

signed main() {
//    ASSAF;
    int exe = 1;
     cin >> exe;
    while (exe--){
        accepted();
         cout << "\n" ;
    }
    return 0;
}