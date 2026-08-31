#include<bits/stdc++.h>
using namespace std;
//typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define PB push_back
#define all(a)   a.begin(),a.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/******************************************************************************************/
/*     _                        _
      | |                      | |  _     _
  __ | |_  _ __ ___   ___  _| |_| | | |
 / ` | ' \| '_ ` _ \ / _ \/ ` |   |   _|
| (_| | | | | | | | | |  __| (_| | |_|   |_|
 \__,_|_| |_|_| |_| |_|\___|\__,_|

*/
/*****************************************************************************************/
void cin_v (vector <int> &v,int SIZE ){
    loop (SIZE){
        int inp;cin >>inp;
        v.PB(inp);
    }
}
void cin_v_ll (vector <ll> &v,int SIZE ){
    loop (SIZE){
        ll inp;cin >>inp;
        v.PB(inp);
    }
}
void print_v (vector<int>v){
    for (int num : v){
        cout<<num<<" ";
    }
    cout <<"\n";
}
// cout <<fixed<<setprecision(6)<<any number;

void solve(){

    int n,q;cin>>n>>q;
    vector<int>v;
    loop(n){
        double x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
        if (y2!=y1) {
            double inp = (-y1 * (x2 - x1)) / (y2 - y1);
            inp += x1;
            v.PB(int(inp));
        }
    }
    sort(all(v));
    //print_v(v);
    loop(q){
        int l,r;cin>>l>>r;
        int s=0,e=v.size()-1,m,ans1=-5;
        while(s<=e){
            m=(s+e)/2;
            if (v[m]>=l){
                ans1=m;
                e=m-1;
            }
            else s=m+1;
        }
        s=0,e=v.size()-1;
        int ans2=-5;
        while(s<=e){
            m=(s+e)/2;
            if (v[m]<=r){
                ans2=m;
                s=m+1;
            }
            else e=m-1;
        }
        //cout <<ans1<<" "<<ans2<<"\n";
        if(ans1==-5||ans2==-5||ans1>ans2)cout <<0;
        else cout <<ans2-ans1+1;
        cout <<"\n";
    }


}

int main()
{
    IOS;
    //system("Color 1A");
    //std::cout << "" << std::endl;
/*****************************************************************************************/

    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }



    return 0;
}
/*
 4 3
7 8 12 3
-3 5 1 3
8 6 8 2
5 3 1 1

*/