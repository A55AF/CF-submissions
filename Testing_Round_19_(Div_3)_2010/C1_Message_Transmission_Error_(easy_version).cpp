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
    string s;cin>>s;
    for( int i = 1 ; i <= sz(s)/2 - 1*(sz(s)%2==0); i++ ) {
        string s1 =  s.substr(0,sz(s)-i), s2 = s.substr(i,sz(s)-1);
        if( s1 == s2 ) {
            return void(cout << "YES\n" << s1 );
        }
    }
    cout << "NO" ;
}

int main() {
    ASSAF;
    int exe = 1;
//    cin >> exe;
    while (exe--){
        accepted();
//        cout << "\n" ;
    }
    return 0;
}