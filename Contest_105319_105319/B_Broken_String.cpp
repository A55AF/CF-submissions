#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		string s ;cin>>s;
		int ans = 0;
		int n = s.size();
		for( int i = 0 , j = n-i-1; i < n/2 ; i++ , j-- ){
			ans += abs(s[i]-s[j]);
		}
		cout << ans << "\n";
	}
    return 0;
}