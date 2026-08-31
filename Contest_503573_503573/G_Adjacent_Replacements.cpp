#include<bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

void accepted() {
    int n ;
    cin >> n ;
    vector<int> v(n);
    set<int> st;
    for ( int i =0;i<n;i++)
        cin >> v[i] , st.insert(v[i]);
    for ( auto it:st)
    {
        bool even = (it%2==0?true:false);
        for(int i=0;i<n;i++)
        {
            if ( v[i] == it )
            {
                if ( even )
                    v[i]--;
                else
                    v[i]++;
                st.insert(v[i]);
            }
        }
    }
    for ( int i=0;i<n;i++)
        cout<<v[i]<<" ";
}

int main() {
    ASSAF;
    int t = 1;
//    cin >> t;
    while (t--){
        accepted();
//        cout << "\n" ;
    }
    return 0;
}