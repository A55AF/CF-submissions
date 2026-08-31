#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while (t--) {
        int m, sh, r;cin>>m>>sh>>r;
        int need = 0;
        if (floor(sh/r) >= 1)
            need += floor(sh/r)*(r+1);
        if (sh%r != 0)
            need+=(sh%r)+1;
        cout<< (need <= m? "YES\n":"NO\n");
    }
    return 0;
}