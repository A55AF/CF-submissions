#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t ;
	cin >> t ;
	while ( t-- )
	{
		int n;
		cin >> n ;
		int mx = 1, cnt = 0;
		vector<int> v;
		for ( int i = 0 ; i < n ; i++ )
		{
			int num;
			cin >> num ;
			v.push_back(num);
		}
		v.push_back(0);
		for ( int i = 0 ; i < n ; i++ )
		{
			if ( v.at(i) <= v.at(i+1) )
				cnt++;
			else
			{
				cnt++;
				if ( cnt > mx )
					mx = cnt ;
				cnt = 0;
			}
		}
		cout << mx << "\n";
	}
	return 0;
}
