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

void accepted()
{
    string s ;
    cin >> s ;
    ll sum = 0 , ans = 0 ; 
    loop(i,0,sz(s)){
        if( s[i] == '1' ) sum++;
        else if ( sum ) ans += sum+1;
    }
    cout << ans ;
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