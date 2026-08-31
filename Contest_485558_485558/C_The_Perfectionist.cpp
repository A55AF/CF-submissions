#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hours , grades = 0;
    cin >> hours ;
    pair<int,int> m1 , m2 ;
    cin >> m1.first >> m1.second >> m2.first >> m2.second ;
    if ( m1.first + m2 .first <= hours )
        grades += m1.second + m2.second ;
    else
    {
        if ( m1.first <= hours && m2.first > hours )
            grades += m1.second;
        else if (m2.first <= hours && m1.first > hours)
            grades += m2.second;
        else if ( m1.first <= hours && m2.first <= hours )
        {
            grades = max(m1.second,m2.second);
        }
    }
    cout << grades ;
    return 0;
}
