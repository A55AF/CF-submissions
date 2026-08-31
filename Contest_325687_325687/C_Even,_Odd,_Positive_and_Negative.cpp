#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int x[n];
    for ( int i = 0 ; i < n ; ++i ){
        cin >> x[i];
    }
    int even = 0 , odd = 0, pos = 0, neg = 0;
    for ( int j = 0 ; j < n ; ++j ){
        if ( x[j] % 2 == 0 ){
            ++even;
        }
        if ( x[j] % 2 != 0 ){
            ++odd;
        }
        if ( x[j] > 0 ){
            ++pos;
        }
        if ( x[j] < 0 ){
            ++neg;
        }
    }
    cout << "Even: "<< even << endl;
    cout << "Odd: "<< odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}