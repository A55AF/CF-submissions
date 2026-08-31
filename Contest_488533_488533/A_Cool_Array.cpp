#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n , sum = 0;
	bool db = true;
	cin >> n ;
	int arr[n] ;
	for ( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;
		sum += arr[i] ;
	}
	for ( int i = 0 ; i < n ; i++ )
	{
		if ( sum % arr[i] != 0 )
			db = false;
	}
	if ( db )
		cout << "YES" ;
	else
		cout << "NO" ;
	return 0;
}
