#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    fast; // ACCEPTED SNIPERS
    freopen("abc.in", "r", stdin);
    
    int n; cin >> n;

    string s; cin >> s;
    string sorted = s;
    sort(sorted.begin(), sorted.end());

    bool a = false,b = false,c = false;

    for (int i = 0;i < n;i++){
        if (s[i] == 'a') a = 1;
        if (s[i] == 'b') b = 1;
        if (s[i] == 'c') c = 1;
    }

    ll sum = 0;
    for (int i = 0;i < n;i++){
        sum += s[i] != sorted[i];
    }

    ll minimum = sum;
    sort(sorted.begin(), sorted.end(), greater());
    sum = 0;
    for (int i = 0;i < n;i++){
        sum += s[i] != sorted[i];
    }

    minimum = min(minimum, sum);

	if ((a && b && !c) || (c && b && !a)){
		cout << 0 << '\n';
	}
    else if ((!b && a && c)){
        cout << -1 << '\n';
    }else{ 
        cout << (minimum + 1) / 2 << '\n';
    }
    return 0;
}