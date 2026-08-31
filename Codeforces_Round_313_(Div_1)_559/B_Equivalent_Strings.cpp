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
string ans[2] {"NO","YES"};
string solve(string s){
    if(sz(s)&1) return s;
    string s1 = solve(s.substr(0,sz(s)/2)),s2 = solve(s.substr(sz(s)/2));
    if(s1<s2) return s1+s2;
    return s2+s1;
}
void accepted() {
    string s1,s2 ;
    cin>> s1>>s2;
    cout <<ans[(solve(s1)==solve(s2))];
}

int main() {
    ASSAF;
    int exe = 1;
//    cin >> exe;
    while (exe--){
        accepted();
//        cout << "\n" ;
    }
    return 0;
}