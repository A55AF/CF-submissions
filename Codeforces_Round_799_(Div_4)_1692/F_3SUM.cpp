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
    cin >> n ;
    vector<int> frq(10);
    for ( int i = 0 ; i < n; i++ ) {
        int x ; cin >> x;
        frq[x%10]++;
    }
    bool flag = false;
    for ( int i = 0 ; i < 10 ; i++ ) {
        if ( !frq[i] ) continue;
        frq[i]--;
        for ( int j = 0 ; j < 10 ; j++ ) {
            if ( !frq[j] ) continue;
            frq[j]--;
            for ( int d = 0 ; d < 10 ; d++ ) {
                if ( !frq[d] ) continue;
                if ( (i+j+d)%10 == 3 )
                    return void(cout << "YES\n");
            }
            frq[j]++;
        }
        frq[i]++;
    }
    cout << "NO\n";
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}