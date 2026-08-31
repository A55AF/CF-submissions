#include <bits/stdc++.h>
using namespace std;
int main(){
    string s , t ;
    cin >> s >> t;
    cout << s.size() << " " << t.size() << "\n";
    cout << s + t << "\n";
    swap(s[0] , t[0]);
    cout << s << " " << t ;
    return 0;
}