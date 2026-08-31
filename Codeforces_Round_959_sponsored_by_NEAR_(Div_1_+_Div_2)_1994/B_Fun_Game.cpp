#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define print(x)           \
    for (auto it : x)      \
    {                      \
        cout << it << " "; \
    }
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
 // /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted()
{
    int n ;
    cin >> n ;
    string s , t ;
    cin >> s >> t ;
    int valid = true , one = false;
    for( int i = 0 ; i < n ; i++ ){
        if( s[i] == '1' ) one = true;
        if( s[i] != t[i] ){
            if(s[i] == '0' && !one ){
                valid = false;
                break;
            }
        }
    }
    if(valid) cout << "YES" ;
    else cout << "NO" ;
}

int main()
{
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
    {
        accepted();
        cout << "\n";
    }
    return 0;
}