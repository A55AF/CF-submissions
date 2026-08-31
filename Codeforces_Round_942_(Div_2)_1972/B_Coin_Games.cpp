#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define loop(i, st, en) for (int i = st; i < en; i++)
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\


const int mod = 1e9 + 7;
ll add(ll x, ll y) { return ((x % mod) + (y % mod)) % mod; }

void flip(char &c ){
    if (c=='U') c = 'D';
    else c = 'U';
}
void accepted()
{
    int n ;
    cin >> n ;
    string s;
    cin >> s;
    bool win = true;
    while ( !s.empty() )
    {
        int optidx = -1, opt = 0;
        int cnt = 0 ;
        loop(i, 0, n) {
            if (s[i] == 'U') {
                cnt++;
                if (i == 0) {
                    if (s[n - 1] == 'U') cnt++;
                }
                if (i == n - 1) {
                    if (s[0] == 'U') cnt++;
                }
                if (s[i + 1] == 'U') cnt++;
                if (s[i - 1] == 'U') cnt++;
            }
            if (cnt > opt) optidx = i, opt = cnt;
        }
        if ( optidx == -1 ) break;
        win = !win;
        s.erase(optidx);
    }
    if ( !win ) cout << "YES" ;
    else cout << "NO" ;
}

int main()
{
    ASSAF;
    int exe = 1;
     cin >> exe;
    while (exe--)
    {
        accepted();
         cout << "\n";
    }
    return 0;
}