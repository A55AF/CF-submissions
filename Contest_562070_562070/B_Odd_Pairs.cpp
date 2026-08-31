#include<bits/stdc++.h>
using namespace std;
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define imie(...) " [" << #__VA_ARGS__ << " = " << (__VA_ARGS__) << "] "
#define display(x) cout<<#x<<": ";for(auto itr:x)cout<<itr<<' ';cout<<endl;
#define HERE cout << "HERE" << endl;
typedef long long ll;

// Tiger NO FAIR XX
void accepted() {
    int n;
    cin >> n;
    int arr[n];
    ll o = 0, e = 0;
    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
        if (arr[i]&1) o++;
        else e++;
    }
    cout << o * e << '\n';
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}