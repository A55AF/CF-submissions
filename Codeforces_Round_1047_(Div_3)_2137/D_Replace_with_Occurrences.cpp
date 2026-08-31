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
    int n;
    cin >> n;
    int arr[n];
    int frq[(int)2e5+7]{};
    for ( int i = 0 ; i < n; i++ ) {
        cin >> arr[i] ;
        frq[arr[i]]++;
    }
    bool valid = true;
    map<int,vector<int>> mp;
    map<int,int> numbers_frq;
    int start = 0;
    int ans[n] ;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( !SZ(mp[arr[i]]) ) start++, mp[arr[i]].push_back(start);
        ans[i] = mp[arr[i]].back();
        numbers_frq[ans[i]]++;
        if ( numbers_frq[ans[i]] == arr[i] ) mp[arr[i]].pop_back();
    }
    for ( int i = 0 ; i < n ; i++ ) {
        if ( numbers_frq[ans[i]] != arr[i] ) {
            valid = false;
            break;
        }
    }
    if ( valid ) {
        for ( int i = 0 ; i < n ; i++ )
            cout << ans[i] << ' ' ;
    } else {
        cout << -1;
    }
    cout << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}