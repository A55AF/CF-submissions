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
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> v(n),prfx(n+1,0);
    for(int i=0;i<n;i++) cin>>v[i] , prfx[i+1]=v[i];
    for(int i=1;i<=n;i++) prfx[i]+=prfx[i-1];
    int ans=0;
    int st = 1 , en = 1 ;
    while ( st!=n+1&&en!=n+1){
        int sum = prfx[en]-prfx[st-1];
        if(sum<l)en++;
        else if(sum>=l&&sum<=r)ans++,st=en+1,en=st;
        else st++;
    }
    cout<<ans;
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