#include<bits/stdc++.h>
using namespace std;

int main(){
    int rounds , result = 0;
    cin >> rounds;
    int mishka[rounds] , chris[rounds] ;
    for ( int i = 0 ; i < rounds ; i++ ){
        cin >> mishka[i] >> chris[i] ;
        if ( mishka[i] > chris[i] )
            result++;
        else if ( mishka[i] < chris[i] )
            result--;
    }
    if ( result > 0 )
        cout << "Mishka";
    else if ( result < 0 )
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}