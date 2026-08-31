#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

bool isFound(long long n, vector<long long> v) {
    for (int i = 0; i < v.size(); i++) {
        if (n == v[i])
            return true;
    }
    return false;
}

bool isPrime(long long n) {
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    long long frq[N] = {0};
    vector<long long> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        for (int j = 1; 1LL * j * j <= x; j++) {
            if (x % j == 0) {
                frq[j] += x;
                if (1LL * j * j != x)
                    frq[x / j] += x;
            }
        }
    }
    long long mx = -1;
    for (int i = 2; i < N; i++) {
        mx = max(mx, frq[i]);
    }
    if (isFound(mx, v) || isPrime(mx))
        cout << "-1\n";
    else
        cout << mx;
    return 0;
}