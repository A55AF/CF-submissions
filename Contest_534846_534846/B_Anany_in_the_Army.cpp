#include<bits/stdc++.h>
#define ASSAF ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(v) v.size()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pb push_back
#define print(x) for ( auto it : x ){ cout << it << " ";}
typedef long long ll;
using namespace std;

// assaf
//  /﹋\
// (҂`_´)
// <,︻╦╤─ - - - -  accepted
// /﹋\
↓↓↓ START FROM HERE ↓↓↓
void always_min(double&a , double&b , double &c ){
    if(b <= a && b <= c ) swap(a,b);
    else if( c <= a && c <= b ) swap(a,c);
}
void accepted() {
    double a ,b , c , k ;
    cin >> a >> b >> c >> k ;
    always_min(a,b,c);
    double hyp = abs(a-sqrt((b*b)+(c*c)));
    a += min(hyp,k);
    double s = (a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << fixed << setprecision(9) << area ;
}

int main() {
    ASSAF;
    freopen("sticks.in","r",stdin);
    int exe = 1;
    cin >> exe;
    while (exe--){
        accepted();
        cout << "\n" ;
    }
    return 0;
}