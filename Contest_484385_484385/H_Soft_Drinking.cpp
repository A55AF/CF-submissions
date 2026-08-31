#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    int totalamount = (k * l)/nl ;
    int totallimes = c * d;
    int totalsalt = p / np;
    cout << min(min(totalamount,totallimes),totalsalt)/n;
    return 0;
}
