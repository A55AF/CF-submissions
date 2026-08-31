#include<bits/stdc++.h>

using namespace std;

int t, n, m, q, a, b;

const int N = 1e5 + 5;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> m;
        int arr[n];
        for (int i = 0;i < n;i++)
            cin >> arr[i];

        set<int> divisors;

        for (int i = 1;i * i <= m;i++){
            if (m % i == 0){
                divisors.insert(i) , divisors.insert(m/i);
            }
        }
        //1 2 3 4 6 12
        //1 4 6 10

        // for ( auto it : divisors ) cout << it << " " ;
        // cout << '\n' ;
        int num_divisors = divisors.size() ;
        sort(arr,arr+n);
        for (auto& divisor : divisors){
            bool multiple = false;
            for ( int i = 0 ; i < n ; i++ ) {
                if ( divisor > arr[i] ) continue;
                if ( arr[i] % divisor == 0 ){ multiple = true; break;}
            }
            if ( divisor>arr[n-1]) break;
            if ( multiple ) num_divisors--;
        }
        cout << num_divisors << endl;
    }


}