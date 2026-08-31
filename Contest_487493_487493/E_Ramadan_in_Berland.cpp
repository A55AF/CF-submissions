#include<bits/stdc++.h>
using namespace std;

long long sum_interval( long long n )
{
	return (n*(n+1))/2;
}

int main()
{
	int n ;
	cin >>  n;
	while ( n-- )
	{
		long long l,r;
		cin >> l >> r ;
		cout << sum_interval(r) - sum_interval(l-1) << "\n";
	}
	return 0;
}
