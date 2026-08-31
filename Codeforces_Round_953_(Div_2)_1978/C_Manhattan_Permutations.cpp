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

bool valid(ll n, ll k, vector<ll> v) {
    ll sum = 0;
    set<ll> st;
    for ( int i = 1 ; i <= n ; i++ )
        st.insert(i);
    for (int i = 1; i <= n; i++) {
        sum += abs(i - v[i]);
        if (st.find(v[i]) == st.end()) return false;
        st.erase(v[i]);
    }
    if (sum == k) return true;
    return false;
}

void accepted() {
    ll n, k, cur;
    cin >> n >> k;
    cur = k;
    vector<ll> v(n + 1, 0);
    if (k % 2) return void(cout << "No");
    ll last = n;
    for (int i = 1; i <= n; i++) {
        if (v[i])continue;
        ll mn = min(cur / 2 + i, last);
        if (mn == last) last--;
        v[i] = mn;
        cur -= abs(mn - i) * 2;
        if (mn != i)v[mn] = i;
    }
    if (valid(n, k, v)) {
        cout << "Yes\n";
        for(int i=1;i<=n;i++) cout<<v[i]<< " ";
    }else cout<<"No";
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
