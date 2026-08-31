#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		long long n; cin >> n;
		long long ans = 0;
		if (n % 2 == 1)
			ans += (n/2)+1;
			
		n /= 2;

		ans += (n * (n+1));

		cout << ans << '\n';
	}
    return 0;
}