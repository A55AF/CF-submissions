#include<bits/stdc++.h>

using namespace std;

long long t, n, m;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        int arr[n];
        for (int i = 0;i < n;i++){
            cin >> arr[i];
            arr[i] *=-1;
        }
        sort(arr, arr+n);
        long long sum = 0;
        for (int i = 0;i < n;i += 2){
            sum += -arr[i];
        }
        cout << sum << endl;

    }


}