#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b , c , d ;
    cin >> a >> b >> c >> d;
    double nArea = (a*b) - (0.5*(a-c)*(b-d));
    cout << fixed << setprecision(6) << nArea ;
    return 0;
}
