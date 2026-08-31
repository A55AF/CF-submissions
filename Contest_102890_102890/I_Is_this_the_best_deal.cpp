#include<bits/stdc++.h>
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
   ll a,b,c;cin>>a>>b>>c;
    ll ans = 1e18;
    ll d = a+b+c;
    if (d>=500) d-=100;
    ans = min(ans,d);

    d = a+b;
    if (d>=500) d-=100;
    ans = min(ans,d + (c < 500 ? c:c-100));

    d = a+c;
    if (d>=500) d-=100;
    ans = min(ans,d + (b < 500 ? b:b-100));

    d = b+c;
    if (d>=500) d-=100;
    ans = min(ans,d + (a < 500 ? a:a-100));

    ans = min(ans,(b < 500 ? b:b-100)+ (a < 500 ? a:a-100)+ (c < 500 ? c:c-100));
    cout<<ans;

}