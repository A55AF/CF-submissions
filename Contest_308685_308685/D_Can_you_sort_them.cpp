#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	cin >> a >> b >> c;
	if ( a <= b && a <= c && c > b )
		cout << a << " " << b << " " << c ;
	else if ( a <= b && a <= c && c <= b )
		cout << a << " " << c << " " << b ;
	else if ( b <= a && b <= c && c > a )
		cout << b << " " << a << " "  << c ;
	else if ( b <= a && b <= c && c <= a )
		cout << b << " " << c << " " << a ;
	else if ( c <= a && c <= b && a > b )
		cout << c <<" " << b << " " << a ;
	else if ( c <= a && c <= b && a <= b)
		cout << c << " " << a << " " << b ;
    return 0;
}
