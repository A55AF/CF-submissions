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

int n ;
bool prime(){
    int cnt = 0;
    if ( n == 1 ) return false;
    for( int i = 1 ; i*i<= n ; i++)
    {
        if( n%i == 0)
        {
            cnt++;
            if( i*i!=n ) cnt++;
        }
    }
    return cnt==2;
}

void accepted()
{
    cin >> n ;
    if ( prime() ) cout << "YES" ;
    else cout << "NO";
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