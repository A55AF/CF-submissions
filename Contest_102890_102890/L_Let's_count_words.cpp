#include<bits/stdc++.h>
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n;cin>>n;
    vector<string>v(n);
    map<string,bool>vis;
    ll ans = 0 ;
    for (auto&i:v)cin>>i;
    for (int i=0;i<n;i++) {
      bool z = 0 ;
        map<string ,bool>q;
        for (int j = 0;j<v[i].size();j++) {
            int l = v[i].size();
            string a;
            for (int k = j;a.size()<l;k++) {
                if (k == l)k = 0;
               a.push_back(v[i][k]);
            }
           q[a]=1;
            if (vis[a])z=1;


        }
        if (!z)ans++;
        for (auto [a,b]:q) vis[a]=1;
    }

    cout<<ans;
}