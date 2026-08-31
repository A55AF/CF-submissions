#include<bits/stdc++.h>
#include <cmath>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while (t--) {
        double x,y; cin>>x>>y;
        double alpha, theta;
        alpha = atan(x/y);
        double pi = 3.14159265358979323846;
        theta =(pi/2.0)-alpha;
        double sinA = sinl(alpha);
        double sinT = sinl(theta);
        double a1 = 0.5*x*y;
        double a2 = 0.5*x*x*sinA*sinT;
        double a3 = 0.5*y*y*sinA*sinT;

        vector<double> areas = {a1,a2,a3};
        sort(areas.begin(), areas.end());
        cout <<fixed << setprecision(4) << areas[0] << " " << areas[1] << " " << areas[2] << endl;
    }
    return 0;
}