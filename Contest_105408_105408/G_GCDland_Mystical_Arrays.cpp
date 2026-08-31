#include <iostream>
#include <algorithm>

using namespace std;

const long long N = 1e7 + 5;
int spf[N+1];
bool vis[N];
void SPF() {
    spf[0] = -1; spf[1] = -1;
    for (int i = 2; i <= N; ++i) spf[i] = i;

    for (int i = 2; i * i <= N; ++i) {
        if (spf[i] != i) continue;
        for (int j = i * i; j <= N; j += i)
            spf[j] = min(spf[j], i);
    }
}

bool addToVis(int num) {
    int prime = spf[num];
    while (prime != -1) {
        if (vis[prime]) return true;
        vis[prime] = true;
        while (num % prime == 0) {
            num /= prime;
        }
        prime = spf[num];
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    SPF();

    bool can = true;
    int gc = __gcd(arr[0], arr[1]);
    addToVis(arr[0] / gc); addToVis(arr[1] / gc);
    for (int i = 2;i < n;i++) {
        if (arr[i] % gc) {
            can = false;
            break;
        }

        if (addToVis(arr[i] / gc)) {
            can = false;
            break;
        }
    }

    if (can)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}