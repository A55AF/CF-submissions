#include <bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define F first
#define S second 
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
    int n , m , q , t1 , t2 , d ;
    cin >> n >> m >> q >> t1 >> t2 >> d ;
    if ( d <= min(t1,t2) ) cout << min ( t1-1 , t2-1 );
    else if ( d >= max(t1,t2) ) cout << min ( n-t1 , n-t2 );
    else cout << abs(t1-t2)/2;
}
// aeiiou
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