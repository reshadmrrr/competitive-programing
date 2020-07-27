#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for( int i = 0 ; i < n; ++i ) cin >> a[i];
    int mn = abs( a[n - 1] - a[0] );
    int p = n - 1, q = 0;
    for( int i = 0; i < n; ++i ){
        if( i > 0 && abs( a[i] - a[i - 1] )  < mn ){
            mn = abs(a[i] - a[i - 1]);
            p = i - 1;
            q = i;
        }
    }

    cout << ++p << " " << ++q << "\n";



    return 0;
}
