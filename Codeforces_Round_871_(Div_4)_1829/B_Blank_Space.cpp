#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n ;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
    }
    int ans = -1, cur = 0 , flag = false;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( !arr[i] ) {
            flag = true;
            cur++;
        } else {
            flag = false;
            ans = max(ans,cur);
            cur = 0;
        }
    }
    ans = max(ans,cur);
    cout << ans << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}