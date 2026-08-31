#include<bits/stdc++.h>
using namespace std;

const int N = 45;

int main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	long long fib[N] ;
	fib[0] = 1,fib[1] = 2;
	for ( int i = 2 ; i < N ; i++ )
		fib[i] = fib[i-1] + fib[i-2] ;
	int t ;
	cin >> t;
	while ( t-- )
	{
		bool check = false;
		long long n ;
		cin >> n ;
		int i = 0 , j = 0 , x = 0 ;
		while ( i < N )
		{
			if ( x == N)
			{
				x = 0;
				j++;
			}
			if ( j == N )
			{
				j = 0;
				i++;
			}

			long long sum = fib[i] + fib[j] + fib[x] ;
			if ( sum == n )
			{
				check = true;
				break;
			}
			x++;
		}
		if ( check )
			cout << "YES\n" ;
		else
			cout << "NO\n" ;
	}
	return 0;
}
