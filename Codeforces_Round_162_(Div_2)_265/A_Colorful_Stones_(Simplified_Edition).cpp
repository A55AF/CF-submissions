#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s, t;
    cin >> s >> t;
    int idx = 0;
    for ( int i = 0 ; i < t.size(); i++ ) {
        if ( s[idx] == t[i] ) idx++;
    }
    cout << idx+1 ;
    return 0;
}