#include<bits/stdc++.h>
using namespace std;
int main(){
    string str ;
    cin >> str ;
    int cnt[30] = {0};
    sort(str.begin() , str.end() );
    for ( int i = 0 ; i < str.size() ; i++ ){
        int num = str[i] - 'a';
        cnt[num]++;
    }
    for ( int i = 0 ; i < 26 ; i++ ){
        if ( cnt[i] == 0 )
            continue;
        else{
            cout << char(i + 'a') << " : " << cnt[i] << "\n"; 
        }
    }
    return 0;
}