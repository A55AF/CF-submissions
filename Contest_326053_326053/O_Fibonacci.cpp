#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    switch (n)
    {
        case 1:
            cout << "0" ;
            break;

        case 2 :
            cout << "1";
            break;

        default :
            long long fst = 0 , sec = 1 , result ;
            for ( int i = 3 ; i <= n ; i++ ){
                result = fst + sec;
                fst = sec;
                sec = result;
            }
            cout << result;
            break;
    }
    return 0;
}