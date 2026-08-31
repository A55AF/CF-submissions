#include <bits/stdc++.h>

typedef long long ll;
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define loop(n) for (int i = 0; i < n; i++)
#define rall(a) a.rbegin(), a.rend()
#define all(a) a.begin(), a.end()
#define pf push_front
#define pb push_back
#define f(p) p.first
#define s(p) p.second
#define sz(x) x.size()

using namespace std;

void in_v(vector<int> &v, int sz)
{
    loop(sz)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void out_v(vector<int> &v, int sz)
{
    loop(sz) cout << v[i] << " ";
}

void solve()
{
    int n ;
    cin >> n ; 
    vector<int> v , ans(n,0);
    in_v(v,n);
    for ( int i = 1 ; i < n ; i++ )
    {
        if ( v[i] <= v[i-1] )
            ans[i] += ans[i-1] + 1 ;
    }
    out_v(ans,n);
}

int main()
{
    FIO int t = 1;
    // cin >> t ;
    while (t--)
    {
        solve();
    }
    return 0;
}