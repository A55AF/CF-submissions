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
    int n ; cin >> n ;
    int arr[n] ;
    vector<string> moves;
    for ( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
    for ( int i = 0 ; i < n ; i++ ) {
        int  x; string move;
        cin >> x >> move;
        moves.push_back(move);
    }
    for ( int i = 0 ; i < n ; i++ ) {
        for ( const char&c : moves[i] ) {
            if ( c == 'U' ) arr[i]--;
            else if ( c == 'D' ) arr[i]++;
        }
        if ( arr[i] < 0 ) arr[i] += 10;
        arr[i] %= 10;
        cout << arr[i] << ' ';
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