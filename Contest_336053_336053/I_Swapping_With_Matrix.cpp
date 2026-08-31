#include <bits/stdc++.h>
using namespace std;

void swapRC( int sz , vector<vector<int>>&arr , int x , int y )
{
    x--;
    y--;
    for ( int i = 0 ; i < sz ; i++ )
        swap(arr.at(i).at(x) , arr.at(i).at(y));
    for ( int i = 0 ; i < sz ; i++ )
        swap(arr.at(x).at(i), arr.at(y).at(i));
}

int main()
{ 
    int n , x , y;
    cin >> n >> x >> y ;
    vector<vector<int>> arr;
    for ( int i = 0 ; i < n ; i++ )
    {
        vector<int> test ;
        for ( int j = 0 ; j < n ; j++ )
        {
            int z ; cin >> z ;
            test.push_back(z);
        }
        arr.push_back(test);
    }
    swapRC(n , arr , x , y );
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}