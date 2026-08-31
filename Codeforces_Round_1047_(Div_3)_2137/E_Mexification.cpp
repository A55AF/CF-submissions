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
    ll n , k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll frq[(int)2e5+7]{};
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
        frq[arr[i]]++;
    }
    sort(all(arr));
    ll mex = 0;
    vector<ll> ans;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( i && arr[i] == arr[i-1] ) continue;

        if ( arr[i] == mex ) mex++;
        else break;
    }
    const ll sz = min(k,4ll);
    vector<ll> clone(n);
    for ( int x_x = 0 ; x_x < sz ; x_x++)  {
        ll sum = 0;
        clone = arr;

        // change the array values to the mex
        for ( int i = 0 ; i < n ; i++ ) {
            if ( (arr[i] < mex && frq[arr[i]] > 1) || arr[i] > mex ) {
                arr[i] = mex;
            }
            sum += arr[i] ;
        }
        ans.push_back(sum);

        sort(all(arr));

        // update frequency
        for ( int i = 0 ; i < n ; i++ ) {
            frq[clone[i]]--;
            frq[arr[i]]++;
        }

        // calculate the new mex
        ll find = 0;
        for ( int i = 0 ; i < n ; i++ ) {
            if ( i && arr[i] == arr[i-1] ) continue;

            if ( arr[i] == find ) find++;
            else break;
        }
        mex = find;
        k--;
    }
    if ( !k || !(k&1) ) cout << ans[SZ(ans)-1] << '\n';
    else cout << ans[SZ(ans)-2] << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}