#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e9
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n ;
    cin >> n ;
    int arr[n] ;
    set<int> s;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
        s.insert(i+1);
    }
    int b[n] {};
    for ( int i = 0 ; i < n ; i++ ) {
        if ( s.find(arr[i]) != s.end() ) b[i] = arr[i] , s.erase(arr[i]);
    }
    for ( int i = 0 ; i < n ; i++ ) {
        if ( !b[i] ) b[i] = *s.begin() ,  s.erase(s.begin());
    }
    print(b);
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