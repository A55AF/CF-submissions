#include <iostream>

using namespace std;

int main() {

    int s, t, x;
    cin >> s >> t >> x;
    if (t > s) {
        if (s <= x && x < t) cout << "Yes";
        else cout << "NO" ;
    }
    else if (t < s) {
        if ((x >= s && x <= 23) || (x >= 0 && x < t)) cout << "Yes";
        else cout << "No";
    }
    return 0;
}
