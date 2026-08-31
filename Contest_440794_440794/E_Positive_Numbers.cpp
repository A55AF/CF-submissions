#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

void positive_number( int x ){
    if ( x > 0 ){
        cnt++;
    }
}

int main(){
    int a , b , c , d , e , f ;
    cin >> a >> b >> c >> d >> e >> f ;
    positive_number(a);
    positive_number(b);
    positive_number(c);
    positive_number(d);
    positive_number(e);
    positive_number(f);
    cout << cnt ;
    return 0;
}