#include <bits\stdc++.h>

using namespace std; 

long long t, n, m, q, a;

const int N = 1e5 + 5;

int spf[N];
void SPF(int spf[]){
    iota(spf, spf+N, 0);
    for (int i = 2;i * i < N;i++){
        if (spf[i] == i)
        for (int j = i * i; j < N;j += i){
            spf[j] = min(spf[j], i);
        }
    }
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    SPF(spf);
    cin >> t;
    while (t--){
        cin >> n >> q;
        int arr[n];
        bool vis[N] = {};
        for (int i = 0;i < n;i++){
            cin >> arr[i];
            vis[arr[i]] = 1;
        }

        while (q--){
            cin >> a;
            int num_div = 0;
            for (int i = 1;i * i <= a;i++){
                if (a % i == 0){
                    int before = i;
                    int after = a / i;
                    if (!vis[before]) num_div++;
                    if (!vis[after] && before != after) num_div++;
                }
            }
            cout << num_div << endl;
        }



    }


}