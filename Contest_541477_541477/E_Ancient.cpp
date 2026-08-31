#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
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
int n;
const int N = 1e6+8;
ll arr[N],dp[N],spf[N];
vector<vector<ll>> p(N);
void sieve() {
    iota(spf,spf+N,0);
    spf[0] = spf[1] = 1;
    for(int i = 2 ; i * i < N; i++ ) {
        if( spf[i] != i ) continue;
        for(int j = i*i ; j < N ; j+=i ) {
            spf[j] = min(i*1LL,spf[j]);
        }
    }
}
void pf(ll n,vector<ll>&v) {
    while ( n != 1 ) {
        v.pb(spf[n]);
        n/=spf[n];
    }
}
ll solve(ll idx) {
    if ( idx == 1 ) return 0;
    if ( idx < 0 ) return inf;
    ll &ans = dp[idx] ;
    if(~ans) return ans;

    ll one = solve(idx-1)+1 , dv = inf;
    for( const auto&i : p[idx]) dv=min(dv,solve(idx/i)+i);
    return ans = min(dv,one);
}
void accepted() {
    cin>>n;
    for(int i=0;i<n;i++) cin >> arr[i];
    ll sum = 0;
    for(int i = 0 ; i < n ; i++ ) sum+=solve(arr[i]);
    cout << sum ;

}

int main() {
    ASSAF;
    int exe = 1;
    sieve();
    for(int i = 2 ; i < N ; i++ ) pf(i,p[i]);
    memset(dp,-1,sizeof dp);
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}