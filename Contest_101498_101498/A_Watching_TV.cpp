#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while ( t-- ){
        int n ;
        cin >> n ;
        map<int,int> mp;
        for ( int i = 0 ; i < n ; i++ ){
            string s ;
            int x ;
            cin >> s >> x ;
            mp[x]++;
        }
        int mxN = INT_MIN , mnF = INT_MAX;
        for (const auto& [f,s] : mp) {
            mxN = max(mxN , s );
        }

        for (const auto& [key, value] : mp) {
            if (value == mxN) {
                mnF = min(mnF, key);
            }
        }
        cout << mnF << "\n" ;
    }
    return 0;
}