#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n ;
    cin >> n ;
    int frq[26]={0};
    for ( int i = 0 ; i < n ; i++ )
    {
        char c ;
        cin >> c ;
        frq[c-'a']++;
    }
    for ( int i = 0 ; i < 26 ; i++ )
    {
        for ( int j = 0 ; j < frq[i] ; j++ )
            cout << char(i + 'a') ;
    }
    return 0;
}
