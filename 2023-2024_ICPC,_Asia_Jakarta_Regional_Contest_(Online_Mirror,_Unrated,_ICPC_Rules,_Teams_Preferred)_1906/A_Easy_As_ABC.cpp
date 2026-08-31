#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
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
int sz1 = 3 , sz2 = 8;
bool valid(int x , int y){
    if(x>=0&&x<sz1&&y>=0&&y<sz1)return 1;
    return 0;
}
void accepted() {
    string s[3];
    for(int i = 0 ; i < sz1 ; i++ ){
        cin>>s[i];
    }
    int dx[] ={1,-1,0,0,1,1,-1,-1};
    int dy[] ={0,0,1,-1,1,-1,1,-1};
    string v[1000];
    int indx = 0;
    for(int x1 = 0 ; x1 < sz1 ; x1++ ){
        for( int y1 = 0 ; y1 < sz1 ; y1++ ){
            for( int adj1 = 0 ; adj1 < sz2 ; adj1++ ){
                int tx1 = x1+dx[adj1] , ty1 = y1+dy[adj1];
                if(!valid(tx1,ty1)||(tx1==x1&&ty1==y1)) continue;
                for(int adj2 = 0 ; adj2 < sz2 ; adj2++ ){
                    int tx2 = tx1+dx[adj2] , ty2 = ty1+dy[adj2];
                    if ( !valid(tx2,ty2)||(tx2==x1&&ty2==y1)||(tx2==tx1&&ty2==ty1)) continue;
                    string str;
                    str.pb(s[x1][y1]);
                    str.pb(s[tx1][ty1]);
                    str.pb(s[tx2][ty2]);
                    v[indx]=str;
                    indx++;
                }
            }
        }
    }
    sort(v,v+indx);
    cout << v[0];
}

int main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--){
        accepted();
        // cout << "\n" ;
    }
    return 0;
}
