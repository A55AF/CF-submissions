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
    int n , q ;
    cin >> n >> q ;
    map<int,bool> mp ;
    vector<pair<int,vector<int>>> v ;
    for ( int i = 0 ; i < n ; i++ ){
        int x ;
        cin >> x ;
        mp[x] = true ;
    }
    int i =0;
    for ( auto &it : mp )
    {
        if ( it.first == 1 )
            continue;
        int num = 2 , ans = it.first;
        v.pb({it.first,{}});
        v[i].second.pb(ans);
        while ( ans*num <= 1e5 )
        {
            if (mp[ans*num])
                v[i].second.pb(ans*num);
            else
                mp.erase(ans*num);
            num++;
        }
        i++;
    }
    while( q-- )
    {
        int k ;
        cin >> k ;
        int mx = 1;
        int l = 0 , r = v.size() - 1;
        while ( l <= r )
        {
            int mid = (l+r)/2;
            if ( v[mid].second.size() >= k )
                mx = v[mid].first , l = mid + 1 ;
            else
                r = mid - 1 ;
        }
        cout << mx << "\n" ;
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
