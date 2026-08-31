#include<bits/stdc++.h>
#include<string>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓


int main() {
    ASSAF;
    int n,m,k;cin>>n>>m>>k;
    string s1,s2;
    cin >> s1 >> s2 ;
    vector<int> v(26);
    for(int i=0;i<m;i++) {
        char c;cin>>c;
        cin >> v[c-'a'];
    }
    int frq[26]{};
    cout << "#define " ;
    int cnt=0;
    for(int i=0;i<n;i++) {
        if(cnt==k) break;
        frq[s2[i]-'a']++;
        if(frq[s2[i]-'a'] <= v[s2[i]-'a'] ) {
            cout << s2[i] ;
            cnt++;
        }
    }
    return 0;
}
