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
    int n;cin>>n;
    if(n&1){
        for(int i = (n+1)/2 ; i<=(3*n)/2 ; i++ ){
            if(i==(n+1)/2) cout << i+1;
            else if (i+1>=(3*n)/2) cout << i+3;
            else cout << i+2;
            cout << " " ;
        }
    }else{
        for( int i = (n+1)/2 ; i <= (3*n)/2 ; i++ ){
            if ( i == n ) continue;
            cout << i <<" ";
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