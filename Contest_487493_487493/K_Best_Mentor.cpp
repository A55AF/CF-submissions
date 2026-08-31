#include<bits/stdc++.h>
using namespace std;

long long sum_of_indx(string s)
{
	long long sum = 0;
	for ( int i = 0 ; i < (int)s.size() ; i++ )
	{
		sum += (s[i]-'0');
	}
	return sum;
}

int main()
{
	long long ID;
	cin >> ID ;
	string s = to_string(ID), reversed = s;
	reverse(reversed.begin() , reversed.end());
	if ( s ==  reversed && ID % sum_of_indx(s) == 0 )
		cout << "Best mentor." ;
	else if ( (s == reversed && ID % sum_of_indx(s) != 0) || (s != reversed && ID % sum_of_indx(s) == 0 ) )
		cout << "He's good.";
	else
		cout << "He'll be fired." ;
	return 0;
}
