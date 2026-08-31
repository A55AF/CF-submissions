#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[21] , b[21];
    cin >> a >> b ;
    int c = strcmp(a,b);
    switch(c)
    {
        case 1:
        case 0:
            cout << b ;
            break;
        case -1:
            cout << a ;
            break;
    }
    return 0;
}