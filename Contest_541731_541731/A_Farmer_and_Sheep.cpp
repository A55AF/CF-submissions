#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
     int t;      cin >> t;
     while (t--) {
          ll n, x;               cin >> n  >> x;
          long double area = 0.5 * (7 * x) * (7 * x);
          area -= (x * 2) * (x * 2);
          cout << max(0LL, n - (ll)(area / 14)) << "\n";
     }
}