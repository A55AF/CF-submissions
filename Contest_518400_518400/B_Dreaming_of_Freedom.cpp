#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
#define loop(i,st,en) for ( int i = st ; i < en ; i++ )
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

const int N = 1e6 + 10;
int primes[N];

void spf() {
    loop(i, 0, N)primes[i] = i;
    for (int i = 2; i * i < N; i++) {
        if (primes[i] == i) {
            for (int j = i * i; j < N; j += i) {
                primes[j] = min(i, primes[j]);
            }
        }
    }
}

void accepted() {
    int n, m;
    cin >> n >> m;
    if (m >= n && n != 1) cout << "NO";
    else {
        if (n == 1) cout << "YES";
        else {
            int mn = primes[n];
            if (m >= mn) cout << "NO";
            else cout << "YES";
        }
    }
}

int main() {
    ASSAF;
    spf();
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
