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
#define int long long
using namespace std;
int cal(int a,int b,char c) {
    if (c=='+')return a+b;
    if (c=='-')return a-b;
    if (c=='*')return a*b;
    if (c=='/')return a/b;
}
signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

ll t=1;//cin>>t;
    while (t--) {
        int x,y,z;
        char xx,yy;
        cin>>x>>xx>>y>>yy>>z;
        if (xx=='*' or xx=='/') {
            int p=cal(x,y,xx);
            int ans=cal(p,z,yy);
            cout<<ans<<endl;
        }
        else if (yy=='*' or yy=='/') {
            int p=cal(y,z,yy);
            int ans=cal(x,p,xx);
            cout<<ans<<endl;
        }
        else {
            int p=cal(x,y,xx);
            int ans=cal(p,z,yy);
            cout<<ans<<endl;
        }
    }
}