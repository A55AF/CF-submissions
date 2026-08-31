#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long a , b , c ;
    cin >> a >> b >> c ;
    long long array[] = { a , b , c };
    sort ( array + 0 , array + 3 + 0 );
    cout << array[0] << endl << array[1] << endl << array[2] << endl ;
    cout << endl << a << endl << b << endl << c ;
    return 0;
}