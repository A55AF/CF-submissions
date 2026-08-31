#include<bits/stdc++.h>
using namespace std;

int main(){
    int limak , bob , years_count = 0;
    bool gtb = false;
    cin >> limak >> bob ;
    while ( gtb == false ){
        if ( limak*3 > bob*2 ){
            gtb = true;
        }
        limak *= 3;
        bob *= 2;
        years_count++;
    }
    cout << years_count ;
    return 0;
}