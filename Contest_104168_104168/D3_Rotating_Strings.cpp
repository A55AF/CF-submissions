#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	

	int tc;
	cin >> tc;

	while (tc--) {
		
		// abcabc
		// cabcab
		// bcabca
		// abcabc

		// abcabcbb
		// babcabcb
		// bbabcabc
		// 
		// 
		// aaaabbbb
		// baaaabbb
		// bbaaaabb
		// bbbaaaab
		// bbbbaaaa
		// 
		// abababab --> 4,4 --> 
		// babababa
		// abababab
		//
		// 
		// aaabbbb --> abababb --> bababab -- bbababa
		// 
		// r with min cyc
		// 

		int n;
		cin >> n;

		int cnt[26] = {};
		for (int i = 0; i < n; i++) {
			char ch;
			cin >> ch;
			cnt[ch - 'a']++;
		}

		int gc = 0;

		for (int i = 0; i < 26; i++)
			gc = gcd(gc, cnt[i]);

		int mnR = 0;
		for (int i = 0; i < 26; i++)
			mnR = mnR + (cnt[i] / gc);

		cout << mnR * (n / mnR - 1) << "\n";
	}
}
