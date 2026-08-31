#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n ;
    cin >> n ;
    queue<int> q;
    for ( int i = 0 ; i < n ; i++ )
    {
        int a , b ;
        cin >> a >> b ;
        if ( a == 1 )
            q.push(b);
        else
        {
            if ( b == q.front() )
                cout << "Yes\n" ;
            else
                cout << "No\n" ;
            if ( q.size() == 0)
                continue;
            q.pop();
        }
    }
    return 0;
}