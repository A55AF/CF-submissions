#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int i = 0 , cnt = 0;
	while ( i!= s.size())
	{
		if (s[i] == 'h' && cnt == 0)
			cnt++;
		else if (s[i] == 'e' && cnt == 1)
			cnt++;
		else if (s[i] == 'l' && cnt == 2)
			cnt++;
		else if (s[i] == 'l' && cnt == 3)
			cnt++;
		else if (s[i] == 'o' && cnt == 4)
			cnt++;
		i++;
	}
	if (cnt == 5)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}