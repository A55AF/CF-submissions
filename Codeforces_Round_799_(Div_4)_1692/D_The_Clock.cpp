#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
bool is_palindrome(string s) {
    for ( int i = 0, j = SZ(s) - 1 ; i < SZ(s)/2; i++, j--) {
        if ( s[i] != s[j] ) return false;
    }
    return true;
}
string next_time(string time, int x) {
    string result_hours;
    string result_minutes;
    int hour = stoi(time.substr(0,2)) + x / 60;
    int minute = stoi(time.substr(3)) + x % 60;
    if ( minute >= 60 ) hour++;
    hour %= 24,minute %= 60;
    result_hours = to_string(hour), result_minutes = to_string(minute);
    if ( SZ(result_hours) == 1 ) result_hours = '0' + result_hours;
    if ( SZ(result_minutes) == 1 ) result_minutes = '0' + result_minutes;
    return result_hours + ":" + result_minutes;
}
void accepted() {
    string time;
    cin >> time ;
    int x;
    cin >> x;
    string nxt = time;
    int ans = 0;
    for ( int i = 0 ; i < 1440; i++ ) {
        ans += is_palindrome(nxt);
        nxt = next_time(nxt,x);
        if ( time == nxt ) break;
    }
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}