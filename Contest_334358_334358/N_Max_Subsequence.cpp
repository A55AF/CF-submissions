#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, cnt = 1;
	cin >> n;
	string s;
	cin >> s;
	char c = s[0];
	for (int i = 1; i < n; i++)
	{
		if (s[i] != c) {
			cnt++;
			c = s[i];
		}
		else
		{
			c = s[i];
		}
	}
	cout << cnt;
	return 0;
}