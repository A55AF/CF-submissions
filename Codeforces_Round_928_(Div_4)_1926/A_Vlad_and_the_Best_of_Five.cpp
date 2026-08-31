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

void accepted() {
    string s;
    cin >> s;
    int a = count(all(s), 'A');
    int b = 5 - a;
    if (a > b)
        cout << "A";
    else
        cout << "B";
}

int main() {
    ASSAF;
    int t = 1;
    cin >> t;
    while (t--) {
        accepted();
        cout << "\n";
    }
    return 0;
}