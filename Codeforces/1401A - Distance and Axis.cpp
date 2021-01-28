#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t, n, k; cin >> t;
    while( t-- ) {
        cin >> n >> k;
        if( n <= k ) cout << k - n << endl;
        else if( n % 2 == k % 2 ) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
