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
    cin >> s; 
    int l = 0 , ans = 0;
    for( int i = 0 ; i < n ; i++ ){
        if(s[i] == '*' ){
            ans += ceil(l/double(3));
            l = 0;
        }else{
            if(i > 0){
                if(s[i-1] == '*' ) {ans += ceil(l/double(3)),l = 0; continue;}
            }
            if( i < n-1 ){
                if(s[i+1] == '*' ) {ans += ceil(l/double(3)),l = 0; continue;}
            }
            l++;
        }
    }
    if ( l != 0 ) ans += ceil(l/double(3));
    cout << ans ;
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