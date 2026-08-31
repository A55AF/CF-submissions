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
    string time;
    int hours = stoi(s.substr(0, 2));
    if (hours < 12)
        time = "AM";
    else {
        time = "PM";
        if (hours > 12)
            hours -= 12;
    }
    if (hours == 0)
        hours = 12;
    s[1] = (hours % 10) + '0';
    hours /= 10;
    s[0] = hours + '0';
    cout << s << " " << time;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
