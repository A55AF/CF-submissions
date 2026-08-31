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
bool in(int l , int r , int x){
    if(x >=l&&x<=r ) return 1;
    return 0;
}
void accepted() {
    int l1 , r1  , l2 , r2 ;
    cin >> l1 >> r1 >> l2 >> r2 ;
    bool f1[105],f2[105];
    for(int i=1;i<=100;i++){
        f1[i]=in(l1,r1,i);
        f2[i]=in(l2,r2,i);
    }
    int ans=0;
    for(int i=2;i<=100;i++){
        ans+=((f1[i]&&f2[i-1])||(f2[i]&&f1[i-1]));
    }
    if(!ans) ans=1;
    cout << ans ;
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
