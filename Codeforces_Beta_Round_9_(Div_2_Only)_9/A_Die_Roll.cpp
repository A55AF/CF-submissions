#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    int A = 6 - max(a,b) + 1, B = 6;
    int gcd = __gcd(A, B);
    cout << A/gcd << '/' << B/gcd;
    return 0;
}