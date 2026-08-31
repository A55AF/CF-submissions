#include <bits/stdc++.h>

#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define pb push_back
#define print(x)      \
    for (auto it : x) \
        cout << it << " ";
typedef long long ll;
using namespace std;
const int N = 1e5 + 10;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
----------------------------

void accepted()
{

    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;
    int ans=0;
    for (int i =0;i<n/2;i++){
        int z=n-i-1;
        map<char,int>mp;
        mp[s1[i]]++;
        mp[s1[z]]++;
        mp[s2[i]]++;
        mp[s2[z]]++;
        if (mp.size()==4)ans+=2;
        else if (mp.size()==2){
            if (mp[s1[i]]!=2)ans++;
        }
        else if (mp.size()==3){
            if (s1[i]==s1[z])ans+=2;
            else ans++;
        }
    }

    if (n&1){
        if (s1[n/2]!=s2[n/2])ans++;
    }

    cout <<ans<<"\n";



}
int main()
{
    ASSAF;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        accepted();
        // cout << "\n";
    }
    return 0;
}