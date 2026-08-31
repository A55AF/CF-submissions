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
    int n;
    cin >> n;
    vector<int> v;
    in_v(v, n);
    int arr[n][11] = {0};
    loop(n)
    {
        if (v[i] == 1)
            arr[i][1]++;
        else if (v[i] == 2)
            arr[i][2]++;
        else if (v[i] == 3)
            arr[i][3]++;
        else if (v[i] == 4)
            arr[i][4]++;
        else if (v[i] == 5)
            arr[i][5]++;
        else if (v[i] == 6)
            arr[i][6]++;
        else if (v[i] == 7)
            arr[i][7]++;
        else if (v[i] == 8)
            arr[i][8]++;
        else if (v[i] == 9)
            arr[i][9]++;
        else if (v[i] == 10)
            arr[i][10]++;
    }
    for (int i = 1; i < n; i++)
    {
        arr[i][1] += arr[i - 1][1];
        arr[i][2] += arr[i - 1][2];
        arr[i][3] += arr[i - 1][3];
        arr[i][4] += arr[i - 1][4];
        arr[i][5] += arr[i - 1][5];
        arr[i][6] += arr[i - 1][6];
        arr[i][7] += arr[i - 1][7];
        arr[i][8] += arr[i - 1][8];
        arr[i][9] += arr[i - 1][9];
        arr[i][10] += arr[i - 1][10];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, c;
        cin >> l >> r >> c;
        if (l == 1)
            cout << arr[r - 1][c] << "\n";
        else
            cout << arr[r - 1][c] - arr[l - 2][c] << "\n";
    }
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