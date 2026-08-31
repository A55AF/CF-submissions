#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int op, id;
        cin >> op;
        if (op == 1) {
            cin >> id, st.push(id);
        } else if (op == 3) {
            if (st.size() == 0)
                continue;
            cout << st.top() << "\n";
        } else {
            if (st.size() == 0)
                continue;
            st.pop();
        }
    }
    return 0;
}