    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int n, m;
        char s;
        cin >> n >> s >> m;
        switch (s)
        {
        case '<':
            if (n < m)
                cout << "Right";
            else
                cout << "Wrong";
            break;
     
        case '>':
            if (n > m)
                cout << "Right";
            else
                cout << "Wrong";
            break;
        case '=':
            if (n == m)
                cout << "Right";
            else
                cout << "Wrong";
        }
        return 0;
    }