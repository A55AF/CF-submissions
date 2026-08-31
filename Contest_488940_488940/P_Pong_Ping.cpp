#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int a , b ;
    cin >> a >> b ;
    int sum = a+b+1;
    if ( sum % 2 != 0 )
        sum++;
    if ( (sum/2)%2 == 0 )
        cout << "Oveeb" ;
    else
        cout << "Beevo" ;
    return 0;
}
