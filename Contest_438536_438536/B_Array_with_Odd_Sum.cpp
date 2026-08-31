#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t-- ){
        int n , result = 0 , odd_nums = 0;
        cin >> n;
        int arr[n];
        for ( int i = 0 ; i < n ; i++ ){
            cin >> arr[i];
            result += arr[i] ;
            if ( arr[i] % 2 != 0){
                odd_nums++;
            }
        }
        if ( result % 2 != 0 ){
            cout << "YES\n" ;
        }
        else {
            if ( odd_nums == n || odd_nums == 0 ){
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
            }
        }
    }
    return 0;
}
