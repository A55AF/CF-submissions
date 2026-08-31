#include <bits/stdc++.h>
using namespace std;

long long distance(pair<double, double> p1, pair<double, double> p2)
{
    long long res = sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        pair<double, double> p1, p2, p3;
        cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second;
        long long d1 = distance(p1, p2), d2 = distance(p2, p3), d3 = distance(p1, p3);
        if (d1 == d2 && d1 == d3)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}