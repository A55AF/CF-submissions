#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                st.push(s[i]);
            else {
                if (st.empty() == true || st.top() == ')')
                    st.push(s[i]);
                else if (st.top() == '(') {
                    st.pop();
                }
            }
        }
        cout << st.size() << "\n";
    }
    return 0;
}
