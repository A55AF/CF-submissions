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

void accepted() {
    string s, c;
    int f;
    cin >> s >> c >> f;
    int Sh = stoi(s.substr(0, 2));
    int Sm = stoi(s.substr(3, 2));
    int Ch = stoi(c.substr(0, 2));
    int Cm = stoi(c.substr(3, 2));
    int h = f / 60, m = f % 60;
    Sh += h, Sm += m;
    Sh += Sm / 60, Sm = Sm % 60;
    if (Ch > Sh || (Ch == Sh && Cm >= Sm))
        cout << "3abytha Ro7 7el yaa Fatyr";
    else
        cout << "Sawman Maqbulan ISA";
}

int main() {
    ASSAF;
    int exe = 1;
    cin >> exe;
    while (exe--) {
        accepted();
        cout << "\n";
    }
    return 0;
}
