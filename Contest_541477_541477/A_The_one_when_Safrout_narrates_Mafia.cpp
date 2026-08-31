#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
int n;
const int N = 3e3+7;
string arr[N],dp[N];
string solve(int idx=0) {
    if(idx==n) return "";
    string &ans=dp[idx];
    if(ans.size()) return ans;

    string take = arr[idx] + solve(idx+1);
    string leave = solve(idx+1);
    return ans = max(take,leave);
}
void accepted() {
    for(auto & i : dp) i="";
    cin>>n;
    for(int i=0;i<n;i++) cin>> arr[i];
    cout << solve();
}

int main() {
    ASSAF;
    freopen("lex.in", "r", stdin);
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n" ;
    }
    return 0;
}
