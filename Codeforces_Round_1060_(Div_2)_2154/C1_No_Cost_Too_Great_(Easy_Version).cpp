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
const int N = 2e5+7;
vector<int> spf(N);
void SPF() {
    for ( int i = 0 ; i < N ; i++ )
        spf[i] = i;

    for ( ll i = 2 ; i < N ; i++ ) {
        if ( spf[i] != i ) continue;
        for ( ll j = i * i * 1ll ; j < N ; j += i ) {
            spf[j] = min(spf[j],int(i));
        }
    }
}
void accepted() {
    int n;cin >> n;
    int arr[n];
    for ( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
    for ( int i = 0 ; i < n ; i++ ) {
        int x; cin >> x ;
    }
    map<int,int> primes;
    for ( int i = 0 ; i < n ; i++ ) {
        int cur = arr[i] ;
        set<int> p;
        while ( cur > 1 ) {
            if ( primes[spf[cur]] ) return void(cout << 0 << '\n');
            p.insert(spf[cur]);
            cur /= spf[cur];
        }
        for ( const int&num : p ) {
            primes[num]++;
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        int cur = arr[i] + 1 ;
        while ( cur > 1 ) {
            if ( primes[spf[cur]] ) return void(cout << 1 << '\n');
            cur /= spf[cur];
        }
    }
    cout << 2 << '\n' ;
}

signed main() {
    ASSAF;
    SPF();
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}