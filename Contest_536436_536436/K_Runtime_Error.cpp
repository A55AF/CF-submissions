#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define print(x) for (const auto& itr : (x)) {cout << itr << ' ';} cout << '\n';
#define MOD 1'000'000'007
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        vector<ll> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }
        sort(numbers.begin(), numbers.end());

        ll x, y = -1;
        for (int i = 0; i < n - 1; i++) {
            x = numbers[i];
            ll low = i + 1, high = n - 1;
            while (low <= high) {
                ll mid = (low + high) / 2;
                ll value = numbers[mid];

                if (x * value == k) {
                    y = value;
                    break;
                }
                else if (x * value < k) {
                    low = mid + 1;
                }
                else if (x * value > k) {
                    high = mid - 1;
                }
            }

            if (y != -1) {
                break;
            }
        }

        if (y == -1) {
            cout << y << '\n';
        }
        else {
            cout << x << ' ' << y << '\n';
        }
    }
    return 0;
}