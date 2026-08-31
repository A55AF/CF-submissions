#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
#define inf (int)1e9
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
int n;
vector<int> a;
const int N = 105, M = 61;
int dp[N][(1<<17)];
vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
vector<int> dMask(M);
void precompute() {
    for ( int i = 1 ; i <= M ; i++ ) {
        int cur = i;
        for ( int idx = 0 ; idx < primes.size() ; idx++ ) {
            if (!(cur % primes[idx]))
                dMask[i] |= (1 << idx);
        }
    }
}
int solve(int idx = 0, int elonMask = 0) {
    if ( idx == n ) return 0;

    int &ans = dp[idx][elonMask];
    if (ans != inf)
        return ans;

    for ( int num = 1; num < M ; num++ ) {
        int diff = abs(a[idx] - num);
        if ( !(dMask[num] & elonMask) )
            ans = min(ans, solve(idx+1, dMask[num] | elonMask) + diff);
    }
    return ans;
}
vector<int> result;
void build(int idx = 0, int elonMask = 0) {
    if ( idx == n ) return;

    int ans = solve(idx, elonMask);

    int valid = a[idx]-1;
    for ( int num = 1; num <= a[idx]+valid ; num++ ) {
        int diff = abs(a[idx] - num);
        if ( !(dMask[num] & elonMask) && ans == solve(idx+1, dMask[num] | elonMask) + diff ) {
            result.push_back(num);
            build(idx+1, dMask[num] | elonMask);
            return;
        }
    }
}
void accepted() {
    cin >> n ;
    a.resize(n);
    for ( int i = 0 ; i < n ; i++ )
        cin >> a[i] ;
    for ( int i = 0 ; i < N ; i++ )
        for ( int j = 0 ; j < (1<<17) ; j++ )
            dp[i][j] = inf;
    build();
    for ( int i = 0 ; i < n ; i++ )
        cout << result[i] << ' ' ;
}
signed main() {
    ASSAF;
    precompute();
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}