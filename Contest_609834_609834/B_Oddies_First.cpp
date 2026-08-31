#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    queue<int> a,b;
    while ( q-- ) {
        int op ;
        cin >> op ;
        if ( op == 1 ) {
            int inp;
            cin >> inp;
            if ( inp&1 ) b.push(inp);
            else a.push(inp);
        }else if ( op == 2 ) {
            if ( a.size() > b.size() )  cout << a.front() << '\n',a.pop() ;
            else cout << b.front() << '\n',b.pop();
        }
    }
    return 0;
}