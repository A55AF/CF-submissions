#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], sub_arrs = n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int z =  0;
        int i =  0;
        while ( true ){
            if ( z == n-1 )
                break;
            if ( arr[i] > arr[i+1]){
                z++;
                i = z;
                continue;
            }
            sub_arrs++;
            i++;
            if ( i == n-1 ){
                z++;
                i = z;
            }
            
        }
        cout << sub_arrs <<"\n";
    }
    return 0;
}