#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q ;
    cin >> q ;
    deque<int>dq;
    while ( q-- ){
        int x , id , n ;
        char c ;
        cin >> x >> c ;
        if ( x == 1 ){
            cin >> id ;
            if ( c == 'R' )
                dq.push_back(id) ;
            else
                dq.push_front(id) ;
        }else{
            cin >> n ;
            if ( n == dq.size() )
                cout << "-1\n" ;
            else{
                if ( c == 'R' )
                    cout << dq[dq.size()-1-n] << "\n" ;
                else
                    cout << dq[n] << "\n" ;
            }
        }
    }
    return 0;
}