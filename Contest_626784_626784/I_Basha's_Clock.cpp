// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
//
// signed main() {
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int x,y,z;char xx,yy,zz;
//     cin>>x>>xx>>y>>yy>>z;
//     int ans=0,p=0,q=0;
//     if (xx=='/') {
//         p=x/y;
//         if (yy=='*') {
//             cout<<z*p<<endl;
//         }
//        else if (yy=='+') {
//             cout<<z+p<<endl;
//         }if (xx=='/') {
//         p=x/y;
//         if (yy=='*') {
//             cout<<z*p<<endl;
//         }
//         if (yy=='+') {
//             cout<<z+p<<endl;
//         }
//         if (yy=='-') {
//             cout<<p-z<<endl;
//         }
//         if (yy=='/') {
//             cout<<p/z<<endl;
//         }
//     }
//         if (yy=='-') {if (xx=='/') {
//         p=x/y;
//         if (yy=='*') {
//             cout<<z*p<<endl;
//         }
//         if (yy=='+') {
//             cout<<z+p<<endl;
//         }
//         if (yy=='-') {
//             cout<<p-z<<endl;
//         }
//         if (yy=='/') {
//             cout<<p/z<<endl;
//         }
//     }
//             cout<<p-z<<endl;
//         }
//         if (yy=='/') {
//             cout<<p/z<<endl;
//         }
//     }
//     if (xx=='*') {
//         p=x/y;
//         if (yy=='*') {
//             cout<<z*p<<endl;
//         }
//         if (yy=='+') {
//             cout<<z+p<<endl;
//         }
//         if (yy=='-') {
//             cout<<p-z<<endl;
//         }
//         if (yy=='/') {if (xx=='/') {
//         p=x/y;
//         if (yy=='*') {
//             cout<<z*p<<endl;
//         }
//         if (yy=='+') {
//             cout<<z+p<<endl;
//         }
//         if (yy=='-') {
//             cout<<p-z<<endl;
//         }
//         if (yy=='/') {
//             cout<<p/z<<endl;
//         }
//     }
//             cout<<p/z<<endl;
//         }
//     }
//     if (yy=='/') {
//         p=y/z;
//         if (xx=='*') {
//           if (xx=='*')p+=x*y;
//     if (yy=='*')q+=y*z;
//     if (y=='/')q+=y/z;
//     if (xx=='-')ans+=x-y;
//
//     if (xx=='/')ans+=x/y;
//     if (xx=='/')ans+=x/y;
//     if (xx=='/')ans+=x/y;
//     if (xx=='/')ans+=x/y;   cout<<x*p<<endl;
//         }
//         if (xx=='+') {
//             cout<<x+p<<endl;
//         }
//         if (xx=='-') {
//             cout<<x-p<<endl;
//         }
//         if (xx=='/') {
//             cout<<x/p<<endl;
//         }
//     }
//     if (yy=='*') {
//         p=y*z;
//         if (xx=='*') {
//             cout<<x*p<<endl;
//         }
//         if (xx=='+') {
//             cout<<x+p<<endl;
//         }
//         if (xx=='-') {
//             cout<<x-p<<endl;
//         }
//         if (xx=='/') {
//             cout<<x/p<<endl;
//         }
//     }
//
//
// }


#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
string s;cin>>s;
    string str;
    for (ll i=0;i<2;i++) {
        if (!(s[i]=='0'&&i==0))
        str.push_back(s[i]);
    }
    ll num=(stoll(str)+5)%24;
    if (num<10) {
        cout<<"0"<<(num);


    }else {
        cout<<(num);
    }
    for (ll i=2;i<s.size();i++) {
        cout<<s[i];
    }
}