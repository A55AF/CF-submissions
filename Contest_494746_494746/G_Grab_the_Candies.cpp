#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, even = 0, odd = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x % 2 == 0)
        even+=x;
      else
        odd+=x;
      v.push_back(x);
    }
    if (even > odd)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }
}
