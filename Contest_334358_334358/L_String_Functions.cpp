#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    string s;
    cin >> n >> q >> s;
    while (q--)
    {
        string inpt;
        cin >> inpt;
        if (inpt == "substr")
        {
            int indx1, indx2;
            cin >> indx1 >> indx2;
            int l = min(indx1, indx2);
            int r = max(indx1, indx2);
            l--;
            r--;
            for (int i = l; i <= r; i++)
                cout << s[i];
            cout << "\n";
        }
        else if (inpt == "sort")
        {
            int indx1, indx2;
            cin >> indx1 >> indx2;
            int l = min(indx1, indx2);
            int r = max(indx1, indx2);
            l--;
            sort(s.begin() + l, s.begin() + r);
        }
        else if (inpt == "pop_back")
        {
            s.pop_back();
        }
        else if (inpt == "back")
            cout << s.back() << "\n";
        else if (inpt == "reverse")
        {
            int indx1, indx2;
            cin >> indx1 >> indx2;
            int l = min(indx1, indx2);
            int r = max(indx1, indx2);
            l--;
            reverse(s.begin() + l, s.begin() + r);
        }
        else if (inpt == "front")
            cout << s.front() << "\n";
        else if (inpt == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
        else if (inpt == "print")
        {
            int pos;
            cin >> pos;
            pos--;
            cout << s[pos] << "\n";
        }
    }
    return 0;
}