#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long array[4];
    for ( int i = 0 ; i < 4 ; ++i ){
        cin >> array[i] ;
    }
    if ( array[1] < array [2] || array[3] < array[0] ){
        cout << "-1" ;
    }
    else {
        sort(array , array + 4 );
        cout<<array[1] << " " << array[2];
    }
    return 0;
}