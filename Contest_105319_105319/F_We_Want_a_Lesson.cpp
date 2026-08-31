#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int n; cin >> n;
	while(n--){
		string s; cin >> s;
		if (s == "BdnaDars")
			cout << "Enough!\n";
		else
			cout << "OK\n";
	}


    return 0;
}