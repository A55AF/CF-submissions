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
    int n;
    cin >> n ;
    vector<int>v(n);
    for(int i=0; i <n;i++) cin>>v[i];
    sort(all(v));
    vector<int> mn(n);
    for(int i = 0 ; i < n ; i++ ) {
        if(i==0) mn[i] = abs(v[i]-v[i+1]);
        if(i==n-1) mn[i] = abs(v[i]-v[i-1]);
        mn[i] = min(abs(v[i]-v[i+1]),abs(v[i]-v[i-1]));
    }
    bool res = false;
    for(int i=1;i<100;i++) {
        bool found = false;
        for(int j=0;j<n;j++) {
            if(v[j] == i) {
                found = true;
                break;
            }
        }
        if(found) continue;
        int ans=0;
        for(int j = 0 ; j < n ;j++) {
            if(abs(v[j]-i) < mn[j] ) ans++;
        }
        if (ans==n) {
            res = true;
            break;
        }
    }
    if(res) cout << "YES";
    else cout << "NO" ;
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