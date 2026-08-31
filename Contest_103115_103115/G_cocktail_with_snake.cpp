#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
	fast;
	int t;cin >> t;
	while (t--){
		long long n, m, k;cin >> n >> m >> k;
		// long long div = ;
		if ((k/n) % 2 == 0){
			cout << k/n + k % n << endl;
		}
		else{
			cout << k/n + n - (k%n) - 1 << endl;
		}
	}
	return 0;
}