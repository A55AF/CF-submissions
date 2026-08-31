#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define print(x) for (const auto& itr : (x)) {cout << itr << ' ';} cout << '\n';
#define MOD 1'000'000'007
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        map<int, int> people, candies;
        vector<int> p, c;
        for (int i = 0; i < n; i++) {
            int input; cin >> input;
            if (!people[input]) {
                p.push_back(input);
            }
            people[input]++;
        }
        for (int i = 0; i < m; i++) {
            int input; cin >> input;
            if (!candies[input]) {
                c.push_back(input);
            }
            candies[input]++;
        }
        sort(p.begin(), p.end());
        sort(all(c));

        int p1 = 0, p2 = 0;
        bool endP;
        endP = false;
        while(p1 < p.size() && p2 < c.size()) {
            if (candies[c[p2]] >= people[p[p1]]) {
                p1++;
                p2++;
            }
            else {
                p2++;
            }
            
            if (p1 == p.size())
                endP = true;
        }

        cout << ((endP) ? "YES\n" : "NO\n");
    }
    return 0;
}