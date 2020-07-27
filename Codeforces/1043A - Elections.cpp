#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, mx = -9999, x;
    cin >> n;
    for( int i = 0 ; i < n; ++i ){
        cin >> x;
        sum += x;
        mx = max( mx, x );
    }
    for( int i = mx; ; ++i )
        if( ( i*n - sum ) > sum ){
            cout << i << "\n";
            return 0;
        }



    return 0;
}
