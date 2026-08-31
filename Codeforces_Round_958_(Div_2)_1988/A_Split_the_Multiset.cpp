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

void accepted() {
    int n , k ;
    cin >> n >> k ;
    deque<int> dq;
    dq.pb(n);
    int ans = 0 ;
    while(dq.size()<n ){
        dq.pop_front();
        for(int i = 0; i < k ; i++ )
            dq.pb(1);
        ans++;
    }
    cout << ans ;
}

int main() {
    //ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}