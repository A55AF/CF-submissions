#include<bits/stdc++.h>
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin >> t ;
    here:
    while ( t-- ) {
        string s;
        int k;
        cin >> s >> k ;
        string len;
        int total_sz = 0;
        string ans;
        for ( int i = 0 ; i < s.size() ; i++ ) {
            if ( s[i] >= '0' && s[i] <= '9' ) len.push_back(s[i]);
            else {
                if (!len.size()) len.push_back('1');
                if ( len.size() > 8 ) {
                    cout << "unfeasible\n";
                    goto here;
                }
                int sz = stoi(len);
                if ( sz + total_sz > k ) {
                    cout << "unfeasible\n";
                    goto here;
                }
                total_sz += sz;
                while ( sz-- ) {
                    ans.push_back(s[i]);
                }
                len.clear();
            }
        }
        cout << ans << '\n' ;
    }
}