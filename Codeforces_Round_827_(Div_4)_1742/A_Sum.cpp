#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int s1 = a + b, s2 = a + c, s3 = b + c;
        if (s1 == c)
            cout << "YES\n";
        else if (s2 == b)
            cout << "YES\n";
        else if (s3 == a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}