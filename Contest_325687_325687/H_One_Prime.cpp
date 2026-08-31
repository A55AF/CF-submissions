#include<iostream>
using namespace std;

int main (){
	int x,t = 0;;
	cin >> x;
	int m = x/2;
	if ( x == 2 ){
		cout << "YES";
		return 0;
	}
	for ( int i = 2 ;i <=m ;++i){
		if ( x % i == 0 ){
			cout << "NO" ;
			t = 1; 
			break;
		}
	}
	if ( t == 0 ){
		cout << "YES";
	}
    return 0;
}
