#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
     int a, b;    cin >> a >> b;
     if (a < b) {
         cout << "p1\n";
     }else if (b < a) {
         cout << "p2\n";
     }else {
         cout << "d\n";
     }
}