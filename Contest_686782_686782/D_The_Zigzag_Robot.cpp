#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll mod=1e9+7;
ll mul(ll a, ll b) {
    return (a*b)%mod;
}
const ll N =1000;
ll n;
/*
1
6
#....#
.##...
 */
void tc() {
    cin>>n;
array<string,2>arr;
    cin>>arr[0];
    cin>>arr[1];
    ll mx = 0;
    ll cur = 0;
    bool up=1,down=1;
    ll cons=0;
    if (arr[0][0]=='.'&&arr[1][0]=='.') {
        cur = 2;
        up=1,down=1;
        cons++;
    }else if (arr[0][0]=='.'&&arr[1][0]=='#') {
        cur=1;
        up=1,down=0;
    }else if (arr[0][0]=='#'&&arr[1][0]=='.') {
        cur=1;
        down=1,up=0;
    }
    mx=max(mx,cur);

for (ll i=1;i<n;i++) {
    ll cur_char=0;
          if (arr[0][i]=='.'&&arr[1][i]=='.') {
        cur_char=0;
       // up=1,down=1;
cons++;
    }else if (arr[0][i]=='.'&&arr[1][i]=='#') {
        cur_char=1;
     //   up=1,down=0;

    }else if (arr[0][i]=='#'&&arr[1][i]=='.') {
        cur_char=2;
       // up=0,down=1;


    }else if (arr[0][i]=='#'&&arr[1][i]=='#') {
        cur_char=3;
       // up=1,down=1;


    }
    ll prev_char;
    if (arr[0][i-1]=='.'&&arr[1][i-1]=='.') {
        prev_char=0;
    }else if (arr[0][i-1]=='.'&&arr[1][i-1]=='#') {
        prev_char=1;
    }else if (arr[0][i-1]=='#'&&arr[1][i-1]=='.') {
        prev_char=2;
    }else if (arr[0][i-1]=='#'&&arr[1][i-1]=='#') {
        prev_char=3;
    }
    if (cur_char==3) {
        cur=0;
            mx=max(mx,cur);
       //continue;
    }
    else if (cur_char==0) {
        cur+=2;
            mx=max(mx,cur);

       // continue;
    }
   else  if (cur_char==1) {
        if (prev_char == 2) {
            cur=1;
            mx=max(mx,cur);


        }else {
            cur+=(down&&(cons&1))||(up&&!(cons&1));
            mx=max(mx,cur);
            cur = 1 ;
        }
        //continue;
    }
    else if (cur_char==2) {
        if (prev_char == 1) {
            cur=1;
            mx=max(mx,cur);
        }else {
            cur+=(down&&!(cons&1))||(up&&(cons&1));
            mx=max(mx,cur);
            cur = 1 ;
        }
        //continue;
    }

    if (arr[0][i]=='.'&&arr[1][i]=='.') {
        cur_char=0;
        // up=1,down=1;

    }else if (arr[0][i]=='.'&&arr[1][i]=='#') {
        cur_char=1;
        up=1,down=0;
cons=0;

    }else if (arr[0][i]=='#'&&arr[1][i]=='.') {
        cur_char=2;
        up=0,down=1;
cons=0;

    }else if (arr[0][i]=='#'&&arr[1][i]=='#') {
        cur_char=3;
        up=1,down=1;
cons=0;

    }



}
cout<<mx<<"\n";
}
// ll getSum(ll a) {
//     ll sum=0;
//     while (a>0) {
//         sum+=a%10;
//         a/=10;
//     }
//     return sum;
// }
// bool isPrime(ll a) {
//     if (a==1) {
//         return 0;
//     }
//     for (ll i=2;i*i<=a;i++) {
//         if (a%i==0) {
//             return 0;
//         }
//     }
//     return 1;
// }

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;cin>>t;
    while (t--) {
        tc();
    }
}