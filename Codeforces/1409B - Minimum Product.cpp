
#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while (t--) {
    int a, b, x, y, n; cin >> a >> b >> x >> y >> n;
    long long ans = 1e18;
    for ( int i = 0; i < 2; ++i ) {
      int da = min( n, a - x );
      int db = min( n - da, b - y );
      ans = min( ans, 1ll * ( a - da ) * ( b - db ) );
      swap( a, b ); swap( x, y );
    }
    cout << ans << endl;
  }
  
    return 0;
}
