#include<bits/stdc++.h>
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

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 2e5 + 7 ;
void accepted() {
    int n ;
    cin >> n ;
    int frq[N]{} ;
    vector<int> v;
    for ( int i = 0 ; i < n ; i++ ) {
        int x ;
        cin >> x ;
        v.pb(x);
        frq[x]++;
    }
    sort(all(v));
    int target = n - 2 ;
    for ( int i = 0 ; i < n ; i++ ) {
        int l = 0 , r = n-1 ;
        int ans = -1 ;
        while ( l <= r ) {
            int mid = (l+r)/2;
            int val = v[mid] ;
            if ( val * v[i] == target ) {
                if ( (mid != i) || ( mid == i && frq[val] > 1 ))
                    ans = val;
                break;
            }
            if ( val * v[i] > target ) r = mid - 1 ;
            else if ( val * v[i] < target ) l = mid + 1 ;
        }
        if ( ans != -1 ) {
            cout << v[i] << ' ' << ans ;
            break;
        }
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