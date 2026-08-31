#include<bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

void accepted() {
    int n ; cin >> n ;
    vector<int> v ;
    map<int,set<int>> ms;
    for ( int i=0;i<n;i++)
    {
        int x ; cin >> x ;
        v.pb(x) ;
    }
    for ( int i=1;i<n-1;i++)
    {
        if ( v[i] != v[i+1] )
            ms[v[i]].insert(i+1);
        if ( v[i] != v[i-1] )
            ms[v[i]].insert(i-1);
    }
    if ( v[0] != v[1] )
        ms[v[0]].insert(1);
    if ( v[n-1] != v[n-2] )
        ms[v[n-1]].insert(n-2);
    int q ; cin >> q;
    while ( q-- )
    {
        int l , r ;
        cin >> l >> r ;
        l--,r--;
        auto it = ms[v[l]].lower_bound(l);
        if ( it == ms[v[l]].end() || *it > r )
            cout << "-1 -1";
        else
            cout << l+1 <<" " << *it+1 ;
        cout << "\n" ;
    }
}

int main() {
    ASSAF;
    int t = 1; cin >> t;
    while (t--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}