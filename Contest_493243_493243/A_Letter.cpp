#include<bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int frq[255] = {0};
    bool check = true;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != ' ')
            frq[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == ' ')
            continue;
        else {
            if (frq[s2[i]] > 0)
                frq[s2[i]]--;
            else
                check = false;
        }
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
