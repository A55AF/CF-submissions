#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    ll n,m,k; cin >> n >> m >> k;
    ll w[n], f[m];
    for (int i = 0;i < n;i++){
        cin >> w[i];
    }
    for (int i = 0;i < m;i++){
        cin >> f[i];
    }

    ll counter = 0, up = 0, down = 0;
    vector<vector<ll>> ans;
    vector<ll> input;
    while (down < m && up < n){
        if (w[up] == f[down]){
            input.push_back(up+1);
            up++; down++;
        }else{
            if (!input.empty()){
                ans.push_back(input);
            }
            input.clear();
            down++;
        }

        if (input.size() == k){
            ans.push_back(input);
            input.clear();
        }
    }

    if (!input.empty()){
        ans.push_back(input);
    }

    cout << ans.size() << '\n';
    for (int i = 0;i < ans.size();i++){
        cout << ans[i].size() << " ";
        for (auto item : ans[i]){
            cout << item << " ";
        }cout << '\n';
    }

    return 0;
}