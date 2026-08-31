#include<bits/stdc++.h>
using namespace std;
int main(){
    int x , pass = 1999 ; 
    while ( true ){
        cin >> x ;
        if ( x == pass ){
            cout << "Correct" ;
            break ;
        }
        if ( x != pass ){
            cout << "Wrong" <<endl;
        }
    }
    return 0;
}