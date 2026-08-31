#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
const int N = 1e7 + 7;
vector<int> spf(N);
map<int,int> frq;
void SPF() {
    for (int i = 0 ; i < N ; i++ )
        spf[i] = i;

    for (int i = 2 ; i * i < N ; i++ ) {
        if (spf[i] != i) continue;
        for (int j = i * i ; j < N ; j += i)
            spf[j] = min(i, spf[j]);
    }
}
void factorize(int x) {
    while (x > 1) {
        int prime = spf[x];
        frq[prime]++;
        x /= prime;
    }
}
void accepted() {
    frq.clear();
    int a, b;
    cin >> a >> b ;
    factorize(a);
    factorize(b);
    cout << frq.size() << '\n' ;
}

signed main() {
    ASSAF;
    SPF();
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}