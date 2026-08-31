#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    string code_num ;
    cin >> code_num ;
    int cnt = 0 , last_indx;
    for ( int i = 0 ; i < size(code_num) ; i++){
        if (code_num[i] != 45 ){
            cnt++;
            last_indx = i;
        }
        else {
            break;
        }
    }
    if ( cnt == a ){
        cnt = 0;
        for ( int i = last_indx + 2 ; i < size(code_num) ; i++ ){
            if (code_num[i] != 45 ){
            cnt++;
        }
        else {
            break;
        }
        }
        if ( cnt == b ){
            cout << "Yes" ;
        }
        else{
            cout << "No" ;
        }
    }
    else {
        cout << "No" ;
    }
    return 0;
}