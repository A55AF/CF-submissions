#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define loop(i, st, en) for (int i = st; i < en; i++)
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\

bool Balindrome(int&n){
    string s;
    while(n>0){
        s.pb('0'+n%2);
        n/=2;
    }
    for( int i=0,x=sz(s)-1;i<sz(s)/2;i++,x--){
        if(s[i] != s[x] ) return false;
    }
    return true;
}

void accepted()
{
    int n;
    cin>>n;
    if (!(n%2))return void(cout<<"NO");
    if(Balindrome(n)) cout << "YES" ;
    else cout << "NO" ;
}

int main()
{
    ASSAF;
    int exe = 1;
    // cin >> exe;
    while (exe--)
    {
        accepted();
        // cout << "\n";
    }
    return 0;
}