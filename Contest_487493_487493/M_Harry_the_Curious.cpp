#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l , r , n , cnt = 0;
	cin >> l >> r >> n ;
	for ( int i = l ; i <= r ; i++ )
	{
		bool prime = true;
		if ( n%i == 0 )
		{
			for ( int j = 2 ; j < i ; j++ )
			{
				if ( i%j == 0 )
				{
					prime = false;
					break;
				}
			}
			if ( prime && i != 1)
			{
				cout << i << " ";
				cnt++;
			}
		}
	}
	if ( cnt == 0 )
		cout << -1 ;
	return 0;
}
