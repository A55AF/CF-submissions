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
    string s ;
    cin >> s ;
    int one  = 0 ,zero = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        if ( s[i] == '1')
            one++;
        if ( n == 1 ) break ;
        if ( s[i] == '0' && s[i+1] == '1' || (s[i+1] == '0' && i == n-2 ))
            zero++;
    }
//    cout << one << " " << zero << "\n" ;
    if( zero < one ) cout << "YES" ;
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