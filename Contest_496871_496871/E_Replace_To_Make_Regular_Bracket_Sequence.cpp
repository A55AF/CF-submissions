#include<bits/stdc++.h>

typedef long long ll;
#define vi vector<int>v
#define mpii map<int,int> mp
#define pii pair<int,int> p
# define pb push_back
# define loop(n) for ( int i = 0 ; i < n ; i++ )
#define all(a) a.begin(),a.end()
#define FIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

void in_v(vector<int> &v, int sz) {
    loop(sz) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void out_v(vector<int> &v, int sz) {
    loop(sz)cout << v[i] << " ";
}

int allsum(vector<int> v) {
    int sum = 0;
    loop(v.size()) {
        sum += v[i];
    }
    return sum;
}

void solve() {
    string s;
    cin >> s;
    stack<char> st;
    int res = 0;
    loop(s.size()) {
        if (s[i] == '(' || s[i] == '<' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else {
            if (st.empty() == true || st.top() == '>' || st.top() == ')' || st.top() == ']' || st.top() == '}') {
                st.push(s[i]);
                continue;
            } else if (s[i] == ')' && (st.top() == '<' || st.top() == '[' || st.top() == '{'))
                res++;
            else if (s[i] == '>' && (st.top() == '(' || st.top() == '[' || st.top() == '{'))
                res++;
            else if (s[i] == '}' && (st.top() == '<' || st.top() == '(' || st.top() == '['))
                res++;
            else if (s[i] == ']' && (st.top() == '<' || st.top() == '(' || st.top() == '{'))
                res++;
            st.pop();
        }
    }
    if (st.size() != 0)
        cout << "Impossible";
    else {
        cout << res;
    }
}

int main() {
    FIO
    int t = 1;
    //cin >> t ;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}