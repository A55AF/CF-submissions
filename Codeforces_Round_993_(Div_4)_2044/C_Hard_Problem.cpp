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
    ll n , a , b , c ;
    cin >> n >> a >> b >> c ;
    ll A = min(a,n) , B = min(b,n);
    ll r1 = n-A , r2 = n-B;
    cout << A + B + min(c,r1+r2);
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
