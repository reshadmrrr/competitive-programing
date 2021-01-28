#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int mx = max( max( a , b ) , c );
        n -= mx - a;
        n -= mx - b;
        n -= mx - c;
        puts( ( n >= 0 and n % 3 == 0) ? "YES" : "NO"); 
    } 
    return 0;
}
