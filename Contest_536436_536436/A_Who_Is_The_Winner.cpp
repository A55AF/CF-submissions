#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define print(x) for (const auto& itr : (x)) {cout << itr << ' ';} cout << '\n';
#define MOD 1'000'000'007
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    int exe = 1 ;
    cin >> exe ;
    while (exe--){
        int n ;
        cin >> n ; 
        vector<tuple<string,int,int>> t(n);
        int mx = -1 ;
        for( int i = 0 ; i < n ; i++ ){
            cin >> get<0>(t[i]) >> get<1>(t[i]) >> get<2>(t[i]) ;
            mx = max(get<1>(t[i]),mx);
        }
        string ans;
        int mnp = INT_MAX;
        for( int i = 0 ; i < n ; i++ ){
            if(get<1>(t[i]) == mx ){
                if(get<2>(t[i]) <= mnp ){
                    mnp = get<2>(t[i]) ;
                    ans = get<0>(t[i]) ;
                }
            }
        }
        cout << ans << "\n" ;
    }
    return 0;
}