#include<bits/stdc++.h>
using namespace std;
long long result = 0;
long long sum( double n){
    if ( fmod(n,2.0) == 0 )
    {
        return n/2;
    }
    else
    {
        return -ceil(n/2);
    }
}
int main(){
    double n ;
    cin >> n ;
    cout << sum(n) ;
    return 0;
}
