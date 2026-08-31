#include<bits/stdc++.h>

using namespace std;

void sortPrice(vector<pair<pair<int, int>, char>> &p) {
    for (int i = 0; i < p.size(); i++) {
        for (int j = i + 1; j < p.size(); j++) {
            if ((p[i].first.first * p[i].first.second) < (p[j].first.first * p[j].first.second)) {
                swap(p[i], p[j]);
            }
        }
    }
}

void s2pair(vector<pair<pair<int, int>, char>> &p, map<int, int> &map1) {
    if (map1.empty())
        return;
    for (auto it: map1) {
        pair<pair<int, int>, char> x;
        x.first.first = it.first;
        x.first.second = it.second;
        x.second = 'S';
        p.push_back(x);
    }
}

void b2pair(vector<pair<pair<int, int>, char>> &p, map<int, int> &map1) {
    if (map1.empty())
        return;
    for (auto it: map1) {
        pair<pair<int, int>, char> x;
        x.first.first = it.first;
        x.first.second = it.second;
        x.second = 'B';
        p.push_back(x);
    }
}

int main() {
    int n, s;
    cin >> n >> s;
    map<int, int> Bm, Sm;
    for (int i = 0; i < n; i++) {
        char c;
        int x, y;
        cin >> c >> x >> y;
        if (c == 'S')
            Sm[x] += y;
        else
            Bm[x] += y;
    }
    vector<pair<pair<int, int>, char>> Sp, Bp;
    s2pair(Sp, Sm);
    b2pair(Bp, Bm);
    sort(Sp.begin(), Sp.end());
    while (Sp.size() > s) {
        Sp.pop_back();
    }
    reverse(Sp.begin(), Sp.end());
    sort(Bp.begin(), Bp.end());
    reverse(Bp.begin(), Bp.end());
    if (Sp.empty() == false) {
        if (Sp.size() >= s) {
            for (int i = 0; i < s; i++)
                cout << Sp[i].second << " " << Sp[i].first.first << " " << Sp[i].first.second << "\n";
        } else {
            for (int i = 0; i < Sp.size(); i++)
                cout << Sp[i].second << " " << Sp[i].first.first << " " << Sp[i].first.second << "\n";
        }
    }
    if (Bp.empty() == false) {
        if (Bp.size() >= s) {
            for (int i = 0; i < s; i++)
                cout << Bp[i].second << " " << Bp[i].first.first << " " << Bp[i].first.second << "\n";
        } else {
            for (int i = 0; i < Bp.size(); i++) {
                cout << Bp[i].second << " " << Bp[i].first.first << " " << Bp[i].first.second << "\n";
            }
        }
    }
    return 0;
}