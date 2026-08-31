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
    int n,x;
    cin>>n>>x;
    bool vis[n+1]{};
    int ans[n+1]{};
    vis[x] = vis[1] = 1;
    ans[1] = x , ans[n] = 1 ;
    for( int i = n-1 ; i >= 2 ; i-- ){
        vector<int>v;
        int div = -1 , cnt = 1 ;
        while( i*cnt <= n ){
            if(vis[i*cnt]) {cnt++;continue;}
            div = i*cnt;
            v.pb(div);
            cnt++;
        }
        if(div == -1 ) return void ( cout << "-1" );
        if(v.size()==1){vis[div] = 1,ans[i] = div;}
    }
    for( int i = 2 ; i <= n-1 ; i++ ) {
        if(ans[i]) continue;
        int div = -1 , cnt = 1 ;
        while( i*cnt <= n ){
            if(vis[i*cnt]) {cnt++;continue;}
            else{
                div = i*cnt;
                break;
            }
        }
        // cout << i << " : " << div << "\n" ;
        if(div == -1 ) return void ( cout << "-1" );
        vis[div] = 1;
        ans[i] = div;
    }
    for( int i = 1 ; i <= n ; i++ ) cout << ans[i] << " " ;
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