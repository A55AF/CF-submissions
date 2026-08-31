#include<bits/stdc++.h>
using namespace std;

long long sum( long long n )
{
    long long result = (pow(n,2) + n)/2;
    return  result;
}

int main(){
    int numOfBananas , dollars , priceOfBanana ;
    cin >> priceOfBanana >> dollars >> numOfBananas ;
    if ( (sum(numOfBananas)*priceOfBanana) - dollars <= 0 )
        cout << "0" ;
    else
        cout << (sum(numOfBananas)*priceOfBanana) - dollars ;
    return 0;
}
