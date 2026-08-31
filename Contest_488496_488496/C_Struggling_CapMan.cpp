#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n ;
	cin >> n ;
	long long mx = -1e12;
	for ( int i = 0 ; i < n ; i++ )
	{
		long long t ;
		cin >> t ;
		if ( t > mx )
			mx = t;
	}
	cout << mx ;
	return 0;
}
