#include<bits/stdc++.h>
using namespace std;

int main(){
    int start_time , end_time , result;
    cin >> start_time >> end_time ;
    if ( start_time > end_time ){
        end_time += 24;
        result = end_time - start_time;
    }
    else if (start_time < end_time ){
        result = end_time - start_time;
    }
    else {
        cout << "THE GAME LASTED 24 HOUR(S)";
        return 0;
    }
    cout << "THE GAME LASTED " << result << " HOUR(S)";
    return 0;
}