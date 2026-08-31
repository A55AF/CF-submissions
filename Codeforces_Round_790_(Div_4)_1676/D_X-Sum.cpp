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

void accepted()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            cin >> arr[i][j];
        }
    }
    ll mx = -1;
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            ll sum = 0;
            ll tx = i + 1, ty = j + 1;
            // cout << "(X,Y) : " << i << ' ' << j << '\n' ;
            while (tx > -1 && tx < n && ty > -1 && ty < m) sum += arr[tx][ty] ,tx++ , ty++;
            // cout << "RIGHT_DOWN SUM = " << sum << '\n';
            tx = i - 1, ty = j + 1;
            while (tx > -1 && tx < n && ty > -1 && ty < m) sum += arr[tx][ty] , tx-- ,ty++;
            // cout << "RIGHT_UP SUM = " << sum << '\n';
            tx = i - 1, ty = j - 1;
            while (tx > -1 && tx < n && ty > -1 && ty < m) sum += arr[tx][ty] , tx-- , ty--;
            // cout << "LEFT_UP SUM = " << sum << '\n';
            tx = i + 1, ty = j - 1;
            while (tx > -1 && tx < n && ty > -1 && ty < m) sum += arr[tx][ty] , tx++ , ty--;
            // cout << "LEFT_DOWN SUM = " << sum << '\n';
            sum += arr[i][j] ;
            // cout << "FINAL SUM = " << sum << '\n' << '\n'  ;
            mx=max(sum,mx);
        }
    }
    cout << mx ;
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