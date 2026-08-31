#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        long long a, b, result;
        int op = 0;
        cin >> a >> b;
        while ( a!=b )
        {
            if ( a > b )
            {
                result = a - b;
                if ( result % 2 == 0 )
                {
                    a-=result;
                }
                else
                {
                    result++;
                    a-=result;
                }
                op++;
            }
            else
            {
                result = b - a ;
                if ( result % 2 != 0 )
                    a+= result ;
                else
                {
                    result--;
                    a += result ;
                }
                op++;
            }
        }
        cout << op << "\n";
    }
    return 0;
}
