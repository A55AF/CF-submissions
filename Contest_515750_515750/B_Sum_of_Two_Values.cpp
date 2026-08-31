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
    int n ;
    cin >> n ;
    int x ;
    cin >> x ;
    map<int,vector<int>> ms;
    for(int i = 0 ; i < n ; i++ ) {
        int inp; cin >> inp ;
        ms[inp].pb(i);
    }
    int indx1 =-1, indx2 = -1;
    for ( const auto& it : ms ){
        if ( !ms[x-it.first].empty()){
            indx1 = ms[it.first][0];
            if ( x == 2*it.first && ms[it.first].size() > 1 ) indx2 = ms[it.first][1];
            else if ( x != 2*it.first ) indx2 = ms[x-it.first][0];
            break;
        }else ms.erase(x-it.first);
    }
    if ( indx2 == -1)
        cout << indx2 ;
    else
        cout << indx1+1 << " " << indx2+1 ;
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
