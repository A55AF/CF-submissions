#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n ;
    cin >> n ;
    multiset<int> nums , clone ;
    for ( int i = 0 ; i < 2*n ; i++ ) {
        int inp; cin >> inp;
        nums.insert(inp);
        clone.insert(inp);
    }
    int x = -1;
    vector<pair<int,int>> ans;
    int mx = *nums.rbegin();
    for ( auto it = clone.begin() ; it != prev(clone.end()) ; it++ ) {
        bool flag = true;
        nums.extract(mx);
        nums.extract(*it);
        int cur_x = max(mx,*it);
        ans.push_back({mx,*it});
        while ( SZ(nums) ) {
            int cur_mx = *nums.rbegin();
            nums.extract(cur_mx);
            if ( nums.find(cur_x - cur_mx) != nums.end()) {
                nums.extract(cur_x - cur_mx);
                ans.push_back({cur_mx, cur_x - cur_mx});
            } else {
                flag = false;
                break;
            }
            cur_x = max(cur_mx, cur_x - cur_mx);
        }
        if ( flag ) {
            cout << "YES\n" ;
            x = mx + *it;
            cout << x << '\n';
            for ( const auto[f,s] : ans ) {
                cout << f << ' ' << s << '\n' ;
            }
            return;
        }
        nums = clone;
        ans.clear();
    }
    cout << "NO\n";
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}