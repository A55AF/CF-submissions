#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    deque<int> child, indx;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        child.push_back(x), indx.push_back(i + 1);
    }
    while (child.size() != 0) {
        if (child.front() <= m) {
            child.pop_front();
            if (indx.size() == 1)
                continue;
            indx.pop_front();
        } else {
            child.push_back(child.front() - m);
            child.pop_front();
            if (indx.size() == 1)
                continue;
            indx.push_back(indx.front()), indx.pop_front();
        }
    }
    cout << indx.front();
    return 0;
}
