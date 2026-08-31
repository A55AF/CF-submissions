#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    while (n--) {
        int num, x, y;
        cin >> num;
        if (num == 1) {
            cin >> x;
            s[x - 1] = toupper(s[x - 1]);
        } else if (num == 2) {
            cin >> x;
            s[x - 1] = tolower(s[x - 1]);
        } else {
            cin >> x >> y;
            swap(s[x - 1], s[y - 1]);
        }
    }
    cout << s;
    return 0;
}
