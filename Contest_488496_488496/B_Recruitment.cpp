#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t ;
	cin >> t ;
	while (t-- )
	{
		int k , cnt = 1;
		cin >> k ;
		for ( int i = 1 ; i <= k/2 ; i++ )
		{
			if ( k%i == 0 )
				cnt++;
		}
		cout << cnt  << "\n";
	}
	return 0;
}
