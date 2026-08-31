#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n ;
	cin >> n ;
	string s ;
	cin >> s;
	bool palindrome = true ;
	for ( int i = 0 , x = n-1; i < (n/2) ; i++,x-- )
	{
		if ( s[i] != s[x] )
		{
			palindrome = false;
			break;
		}
	}
	reverse(s.begin() , s.end() );
	cout << s << "\n" ;
	if ( palindrome )
		cout << "YES" ;
	else
		cout << "NO" ;
	return 0;
}
