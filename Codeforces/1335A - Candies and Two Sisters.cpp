#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t, n; cin >> t;
    while( t-- ) {
        cin >> n;
        if( n & 1 ) cout << n / 2 << endl;
        else cout << ( n - 1 ) / 2 << endl; 
    }
    return 0;
}
