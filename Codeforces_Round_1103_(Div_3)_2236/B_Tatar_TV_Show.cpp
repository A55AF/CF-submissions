#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;
// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i = 0 ; i < k ; i++) {
        int cur = i;
        for(int j = i + k; j < n ; j += k, cur += k) {
            if (s[cur] == '1' && s[j] == '1')
                s[cur] = '0', s[j] = '0';
            else if(s[cur] == '1' && s[j] == '0')
                s[cur] = '0', s[j] = '1';
        }
    }
    int flag = true;
    for(int i = 0 ; i < n ; i++) {
        if(s[i] == '1') {
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}
signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}
