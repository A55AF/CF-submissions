#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    ll q;
    cin >> q;
    vector<pair<pair<int, char>, bool>> vp;
    while (q--)
    {
        int x;
        string s;
        cin >> x >> s;
        vp.push_back({{x, s[0]},0});
    }
    sort(vp.begin(), vp.end());
    ll ans = 0, sum = 0;
    for (int i = 0 ; i < vp.size() ; i++)
    {
        if (vp[i].first.second == 'U' && a > 0&& vp[i].second == 0 )
            ans++, a--, sum += vp[i].first.first ,vp[i].second = true;
        else if ( vp[i].first.second == 'P' && b > 0 && vp[i].second == 0 )
            ans++ , b-- , sum+= vp[i].first.first , vp[i].second = true;
    }
    for ( int i = 0 ; i < vp.size() ; i++ )
    {
        if ( vp[i].second == 0 && c > 0 )
            ans++ , sum += vp[i].first.first , vp[i].second = true , c--;
    }
    cout << ans << " " << sum ;
    return 0;
}
