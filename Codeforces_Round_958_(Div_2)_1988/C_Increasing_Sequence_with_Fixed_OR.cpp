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
string binary(ll x){
    string res;
    while(x > 0 ){
        res.pb((x%2)+'0');
        x/=2;
    }
    reverse(all(res));
    return res;
}
ll b2d(string s ){
    ll res = 0 ;
    ll x = 1;
    for(int i = s.size()-1 ; i >= 0 ; i--, x*=2){
        if(s[i] == '1' )
            res += x;
    }
    return res ;
}
void accepted() {
    ll n ;
    cin >> n ;
    string b = binary(n) ;
    vector<ll> ans;
    ans.pb(n) ;
    for( int i = b.size()-1 ; i >= 0 ; i-- ){
        string s = b ;
        if(b[i] == '1') {
            s[i] = '0' ;
            ll res = b2d(s) ;
//            cout << s << "\n" ;
            if(res != 0 )
                ans.pb(res) ;
        }
    }
    sort(all(ans));
    cout << ans.size() << "\n" ;
    print(ans);
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}