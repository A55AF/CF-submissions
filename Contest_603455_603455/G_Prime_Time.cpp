#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;
const int N = 1e6+7;
int spf[N];
void SPF() {
    for(int i = 0; i < N; i++)
        spf[i] = i;
    for(int i = 2; i * i < N; i++) {
        if(spf[i] != i) continue;
        for(int j = i * i; j < N; j += i) {
            spf[j] = min(spf[j], i);
        }
    }
}
int prime_factors(int num) {
    int res = 0;
    while(num > 1) {
        res++;
        num /= spf[num];
    }
    return res;
}
void tc() {
    int a, b;
    cin >> a >> b;
    int g = __gcd(a, b);
    a = prime_factors(a);
    b = prime_factors(b);
    g = prime_factors(g);
    cout << a + b - 2*g << '\n';
}
signed main() {
    FAST;
    SPF();
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        tc();
    return 0;
}
