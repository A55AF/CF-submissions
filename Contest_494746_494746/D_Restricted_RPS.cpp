#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int r, p, s;
		cin >> r >> p >> s;
		string str, ans;
		cin >> str;
		int win = (n + 1) / 2, res = 0;
		int br = 0, bp = 0, bs = 0;
		for (int i = 0; i < str.size() ; i++)
		{
			ans.push_back('.');
		}
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == 'R')
			{
				if ( p > 0 )
					p--, ans[i] = 'P', res++;
			}
			else if (str[i] == 'S')
			{
				if ( r > 0 )
					r--, ans[i] = 'R' , res++;
			}
			else if (str[i] == 'P')
			{
				if ( s > 0 )
					s--, ans[i] = 'S', res++;
			}
		}
		if (res < win)
			cout << "NO\n";
		else
		{
			for (int i = 0; i < str.size(); i++)
			{
				if (ans[i] == '.')
				{
					if (p > 0)
						ans[i] = 'P' , p-- ;
					else if (s > 0)
						ans[i] = 'S' , s-- ;
					else if (r > 0)
						ans[i] = 'R' , r-- ;
				}
			}
			cout << "YES\n" << ans << "\n";
		}
	}
	return 0;
}