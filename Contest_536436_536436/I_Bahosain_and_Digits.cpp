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
    int mx = -1, n = sz(s);
    for( int k = n ; k > 0; k-- ){
        for( int num = 0 ; num < 10 ; num++ ){
            vector<int> v(n*3);
            int sum = 0;
            for( int i = 0 ; i < s.size()-k+1; i++ ){
                sum += v[i];
                int new_num = (s[i]-'0'+sum)%10;
                int inc = (num+10-new_num)%10;
                sum += inc;
                v[i+k] -= inc;
            }
            bool valid = true;
            for( int i = n-k+1 ; i < n ; i++ ){
                sum += v[i];
                if( (s[i]-'0'+sum)%10 != num ){
                    valid = false;
                    break;
                }
            }
            if( valid ) { mx = max(mx, k); break;}
        }
    }
    cout << mx ;
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