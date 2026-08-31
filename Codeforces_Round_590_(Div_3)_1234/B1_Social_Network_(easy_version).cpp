#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;
// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void accepted() {
    int n, k;
    cin >> n >> k;
    deque<int> dq;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        bool found = false;
        for(int j = 0 ; j < dq.size(); j++) {
            if(x == dq[j]) {
                found = true;
                break;
            } 
        }
        if (found) continue;
        if(dq.size() == k) {
            dq.pop_back();
        } 
        dq.push_front(x);
    }
    cout << dq.size() <<'\n';
    for(int i = 0 ; i < dq.size(); i++)
        cout << dq[i] << ' ';
}
signed main() {
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while ( exe-- )
        accepted();
}