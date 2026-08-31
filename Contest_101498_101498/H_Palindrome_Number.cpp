#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        // -1 Case
        if (n % 2 == 0 && s % 2 == 1) {
            cout << -1 << '\n';
            continue;
        }
        else if (s > n * 9) {
            cout << -1 << '\n';
            continue;
        }
        else if (n > 1 && s == 1) {
            cout << -1 << '\n';
            continue;
        }

        // Palindrome Case
        string answer = "";
        int temp_number = s / 2;
        for (int i = 0; i < n / 2; i++) {
            answer += char(min(temp_number, 9) + '0');
            temp_number -= min(temp_number, 9);
        }
        string tmp_str = answer;
        reverse(tmp_str.begin(), tmp_str.end());

        if (n % 2 == 1)
            answer += char((temp_number * 2 + (s % 2 == 1)) + '0');

        answer += tmp_str;
        cout << answer << '\n';
    }
    return 0;
}