#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
set<long long> s;

void solve(long long x = 0) {
    if (x > 1e10)
        return;
    s.insert(x);
    solve(x * 10 + 4);
    solve(x * 10 + 7);
}

int main() {
    ASSAF;
    int n;
    cin >> n;
    solve();
    auto it = s.begin();
    int i = 0;
    while (*(it++) != n && ++i);
    cout << i;
    return 0;
}

		   	 	 			 		  	 	  	   		