#include <bits/stdc++.h>
using namespace std;

long long sum(long long n) { return (n * (n + 1)) / 2; }

int main()
{
    long long n, m;
    cin >> n >> m;
    long long points = n * sum(m - 1) + m * sum(n - 1);
    cout << points;
    return 0;
}