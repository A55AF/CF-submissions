#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define SZ(v) v.size()
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define inf 1e18
typedef long long ll;
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓

void accepted() {
    int n,x;cin>>n>>x;
    map<int,int> frq;
    map<int,multiset<int>> ms;
    for(int i=0;i<n;i++) {
        int inp;cin>>inp;
        frq[inp]++,ms[inp%x].insert(inp);
    }
    int ans=0;
    while(true) {
        if(frq[ans]) {
            frq[ans]--;
            ms[ans%x].extract(ans);
        }else if (!ms[ans%x].empty()&&*ms[ans%x].begin()<ans) {
            frq.erase(ans);
            ms[ans%x].extract(ms[ans%x].begin());
        }else {
            cout << ans;
            break;
        }
        ans++;
    }
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}
