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
    string s ;
    cin >> s ;
    bool isPalindrome = true;
    for ( int i = 0 , j = s.size() -1 ; i < s.size()/2 ; i++ , j-- ){
        if ( s[i] != 'w' && s[i] == s[j] ) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) cout << s;
    else{
        for( int i = s.size()-1 ; i >= 0 ; i-- ){
            if(s[i] == 'p') cout << 'q';
            else if ( s[i] == 'q' ) cout << 'p' ;
            else cout << s[i] ;
        }
    }
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
