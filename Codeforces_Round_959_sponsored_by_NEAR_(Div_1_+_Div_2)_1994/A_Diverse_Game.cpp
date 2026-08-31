#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define print(x)           \
    for (auto it : x)      \
    {                      \
        cout << it << " "; \
    }
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
 // /﹋\
↓↓↓ START FROM HERE ↓↓↓

void accepted()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m)), ans(n, vector<int>(m));
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            ms.insert(v[i][j]);
        }
    }
    for(int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            auto it = ms.upper_bound(v[i][j]);
            if(it != ms.end()) ans[i][j] = *it,ms.erase(it);
        }
    }
    bool valid = true;
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            if(ans[i][j]!=0) continue;
            bool found = false;
            for(const auto&it:ms){
                if(v[i][j] != it){
                    found = true;
                    ans[i][j] = it;
                }
            }
            if (!found){
                valid = false;
                break;
            }
        }
    }
    if(valid){
        for(int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j++ ){
                cout << ans[i][j] << " " ;
            }
            cout << "\n" ;
        }
    }else{
        cout << "-1" ;
    }
}

int main()
{
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--)
    {
        accepted();
        cout << "\n";
    }
    return 0;
}