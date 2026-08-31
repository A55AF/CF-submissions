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
int hello(int x , int y ){
    return y - (x%y);
}
void accepted() {
    int x , y , k ;
    cin >> x >> y >> k ;
    while ( k > 0 ){
        int diff = min(k,hello(x,y));
        x += diff;
        k-=diff;
        while (!(x%y)) x/=y;
        if ( x == 1 ){
            x+=(k%(y-1));
            break;
        }
    }
    cout << x ;
}

int main() {
//    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}