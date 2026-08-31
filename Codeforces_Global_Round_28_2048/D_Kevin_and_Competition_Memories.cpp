#include <bits/stdc++.h>
using namespace std;

// Ana hackart assaff hahahahahahah

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        long long kevin; vector<int> par(n-1), pro(m);
        for (int i = 0;i < n;i++){
            if (i == 0) cin >> kevin;
            else cin >> par[i-1];
        }

        for (int i = 0;i < m;i++)
            cin >> pro[i];
        
        sort(par.begin(), par.end());
        sort(pro.begin(), pro.end());

        int lastSolve = -1;
        for (int i = 0;i < pro.size();i++){
            if (kevin >= pro[i]){
                lastSolve = i;
            } else {
                sort(pro.begin() + i, pro.end(), greater());
                break;
            }
        }

        for (int inc = 1;inc <= m;inc++){
            long long sum = 0;
            for (int i = 0;i < m;i += inc){
                if (i + inc > m) break;

                if (lastSolve >= i + inc - 1){
                    sum++; 
                }else{
                    auto it = lower_bound(par.begin(), par.end(), pro[i + inc - 1]);
                    sum += (par.end() - it) + 1;
                }
            }
            cout << sum << ' ';        
        }cout << '\n';

    }
    return 0;
}
