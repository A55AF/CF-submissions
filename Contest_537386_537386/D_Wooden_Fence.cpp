#include<bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
void always_max(int&x,int&y){
    if(y > x ) swap(x,y);
}
int main() {
    fast; //ACCEPTED SNIPERS
    int t ;
    cin >> t ;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (x >= n - (n / 2) && y >= (n / 2)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}