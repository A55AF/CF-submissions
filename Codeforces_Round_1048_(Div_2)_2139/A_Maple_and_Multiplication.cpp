#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define rall(x) x.rbegin(),x.rend()
#define all(x) x.begin(),x.end()
#define SZ(v) ((int)v.size())
#define S second
#define F first
typedef long long ll;
using namespace std;

// Assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void always_max(long long &x, long long &y)
{
    if (x < y)
        swap(x, y);
}
long long gcd(long long x, long long y)
{
    while (y != 0)
    {
        x %= y;
        always_max(x, y);
    }
    return x;
}
long long lcm( long long x , long long y )
{
    return (x*y)/gcd(x,y);
}
void accepted() {
    int a ,b ;
    cin >> a >> b;
    int result = lcm(a,b);
    int ans = 0;
    if ( result != a ) ans++;
    if ( result != b ) ans++;
    cout << ans << '\n' ;
}

signed main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while ( exe-- )
        accepted();
}