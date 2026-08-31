#include <bits\stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

int main(){
    fast;
    int n; cin >> n;
    string s; cin >> s;
    int p1, p2, l;
    cin >> p1 >> p2 >> l;
    // Memcopy
    string tmp = s;
    int idx1 = p1 - 1, idx2 = p2 - 1;
    for (int i = 0; i < l; i++) {
        tmp[idx2] = tmp[idx1];
        idx1++; idx2++;
    }
    cout << tmp << endl;

    // Memmove
    tmp = s;

    idx1 = p1 - 1, idx2 = p2 - 1;
    for (int i = 0; i < l; i++) {
        tmp[idx2] = s[idx1];
        idx1++; idx2++;
    }
    cout << tmp << endl;
    return 0;
}