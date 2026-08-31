#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n ;
	cin >> n ;
	long long arr[n] , cnt[n]{0};
	for ( int i = 0 ; i < n ; i++ )
		cin >> arr[i] ;
	for ( int i = 0 ; i < n ; i++ )
	{
		for ( int j = 0 ; j < n ; j++ )
		{
			if ( i == j )
				continue;
			if ( arr[i] > arr[j] )
				cnt[i]++;
		}
		cout << cnt[i] << " ";
	}
	return 0;
}
