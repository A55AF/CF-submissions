#include <bits/stdc++.h>
using namespace std;

long long prob(double n)
{
    return pow(n, 4) - (n + (n*(n - 1) * 4));
}

int main()
{
    int n;
    cin >> n;
    cout << prob(n);
    return 0;
}
