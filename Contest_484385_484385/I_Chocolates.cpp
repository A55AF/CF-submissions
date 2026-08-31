#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    n % 2 ? cout << "Unfair" : n != 0 ? cout << "Fair" : cout << "Unfair";
    return 0;
}
