#include<bits/stdc++.h>
using namespace std;

long long f(int x)
{
	long long res = 1;
	for ( int i = 1 ; i <= x ; i++ )
	{
		res *= i;
	}
	return res;
}

long long p(int n , int r )
{
	return f(n)/f(n-r);
}

int main()
{
	int n , m ;
	cin >> n >> m ;
	cout << p(n,m);
	return 0;
}
