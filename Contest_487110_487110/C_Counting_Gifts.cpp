#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , toys = 0 , electronics = 0 , books = 0 , cds = 0;
    cin >> n ;
    string s ;
    cin >> s;
    for ( int i = 0 ; i < n ; i++ )
    {
        switch(s[i])
        {
        case 't':
            toys++;
            break;
        case 'e':
            electronics++;
            break;
        case 'b':
            books++;
            break;
        case 'c':
            cds++;
            break;
        }
    }
    cout << toys << " " << electronics << " " << books << " " << cds ;
}
