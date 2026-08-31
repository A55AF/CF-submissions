#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while (t--) {
        ll n,d,h;
        cin>>n>>d>>h;
        vector<ll>a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        if ((n+1)/2>d) { cout<<-1<<"\n"; continue; }
        sort(a.begin(),a.end());
        ll ans=(a[n-1]+h-1)/h;
    for (int i=0;i<n-d;i++) {
            ll x=(a[i]+a[n-d+i]+h-1)/h;
            ans=max(ans,x);
        }
        cout<<ans<<"\n";
    }
    return 0;
}