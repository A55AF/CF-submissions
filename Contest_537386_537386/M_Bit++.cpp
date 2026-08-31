#include<bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {
    fast; //ACCEPTED SNIPERS
    int n; cin >> n;
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        if (s[1] == '+')
            answer++;
        else if (s[1] == '-')
            answer--;
    }
    cout << answer << '\n';
    return 0;
}