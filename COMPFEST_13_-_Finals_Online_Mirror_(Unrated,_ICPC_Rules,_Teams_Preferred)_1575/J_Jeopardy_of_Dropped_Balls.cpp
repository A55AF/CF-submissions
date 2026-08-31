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
int n , m , k ;
const int N = 1e3+2 , M = 1e3+2 , K = 1e5+2;
int arr[N][M] , ball[K] ,col[M]{};
int solve(int x , int y) {
    if ( x >= n ) return y + 1 ;
    col[y]+=(arr[x][y]!=2);
    int px = x , py = y ;
    if(arr[x][y]==1) y++;
    else if(arr[x][y]==2) x++;
    else y--;
    arr[px][py] = 2;
    return solve(x,y);
}
void accepted() {
    cin >> n >> m >> k ;
    for(int i = 0 ; i < n ; i++) {
        for( int j = 0 ; j < m ; j++ ) {
            cin >> arr[i][j] ;
            col[j]+=(arr[i][j]==2);
        }
    }
    for ( int i = 0 ; i < k ; i++ ) cin >> ball[i];
    for(int i=0;i<k;i++) {
        cout << solve(0,ball[i]-1) << " " ;
    }
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