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
    string x , y ;
    cin >> x >> y ;
    vector<string> v1 , v2 ;
    bool pos = true;
    for(const auto&c:x){
        string s; int last = 0;
        if(c=='-') { pos = false; continue;}
        if(!pos) s+='-';
        s+=c;
        if(c>'0'&&c<='9') v1.pb(s),last=1;
        for(int i=0;i<sz(v1)-last;i++) v1[i]+='0';
    }
    pos = true;
    for(const auto&c:y){
        string s; int last = 0;
        if(c=='-') { pos = false; continue;}
        if(!pos) s+='-';
        s+=c;
        if(c>'0'&&c<='9') v2.pb(s),last = 1;
        for(int i=0;i<sz(v2)-last;i++) v2[i]+='0';
    }
    for(int i=0;i<sz(v1);i++){
        for(int j=0;j<sz(v2);j++){
            cout << v1[i] << " x " << v2[j] ;
            if(i==sz(v1)-1&&j==sz(v2)-1) continue;
            cout << " + " ;
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