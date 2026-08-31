#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod=1e9+7;
ll mul(ll a, ll b) {
    return (a*b)%mod;
}
const ll N =1000;
ll dp[N+5][N+5];
vector<pair<ll,ll>>prs;
ll n;
ll manhattan(pair<ll,ll>p1,pair<ll,ll>p2) {
    return abs(p1.first-p2.first)+abs(p1.second-p2.second);
}
ll solve(ll i1, ll i2) {
    if (max(i1,i2)==n) {
        return 0;
    }
    ll &DP=dp[i1][i2];
    if (~DP) {
        return DP;
    }
    ll idx=max(i1,i2)+1;
    ll v1=(i1==0)?0:manhattan(prs[i1],prs[idx]),v2=(i2==0)?0:manhattan(prs[i2],prs[idx]);
    return  DP = min(solve(idx,i2)+v1,solve(i1,idx)+v2);
}
void tc() {



}
// ll getSum(ll a) {
//     ll sum=0;
//     while (a>0) {
//         sum+=a%10;
//         a/=10;
//     }
//     return sum;
// }
// bool isPrime(ll a) {
//     if (a==1) {
//         return 0;
//     }
//     for (ll i=2;i*i<=a;i++) {
//         if (a%i==0) {
//             return 0;
//         }
//     }
//     return 1;
// }

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
// for (ll i=1;i<=1000;i++) {
//     ll dig=getSum(i);
//     if(i%dig==0&&isPrime(dig)) {
//         cout<<i<<" "<<dig<<"\n";
//     }
// }
//     return 0;
    // int t=1;
    // cin >> t;
    // while (t--) {
    //     tc();
    // }

    memset(dp,-1,sizeof dp);
    ll m;cin>>m;
    n=m;
    prs.push_back({0,0});
    while (m--) {
        ll x,y;cin>>x>>y;
        prs.push_back({x,y});
    }
    cout<<solve(0,0);
}