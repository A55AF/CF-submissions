#include<bits/stdc++.h>
using namespace std;

int main (){
    int a , c = 0;
    cin>>a;
    for(int b=1; b<=a/2 ; ++b){
        if ( a%b == 0){
            ++c;
        }
    }
    cout << c;
    return 0;
}
