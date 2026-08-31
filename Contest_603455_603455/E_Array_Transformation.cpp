#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;
string to_bin(int num) {
    string ans;
    while(num > 0) {
        ans.push_back((num%2) + '0');
        num /= 2;
    }
    while(ans.size() < 32) {
        ans += '0';
    }
    return ans;
}
void tc() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    for(int i = 0; i < n; i++) {
        string num1 = to_bin(a[i]);
        string num2 = to_bin(b[i]);
        for(int b = 0; b < 32; b++) {
            if(num1[b] != num2[b] && num1[b] == '1') return void(cout << "NO");
        }
    }
    cout << "YES";
}
signed main() {
    FAST;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        tc();
    return 0;
}
