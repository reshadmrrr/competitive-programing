//solution 1

#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        int n, x, num, odd = 0, even = 0;
        cin >> n >> x;
        for( int i = 0; i < n; i++ ) {
            cin >> num;
            if( num % 2 ) odd++;
            else even++;
        }
        bool cool = false;
        for( int i = 1; i <= odd; i += 2 ){
            if( i <= x and x - i <= even  ){
                cool = true;
                break;
            } 
        }
        puts( cool ? "Yes" : "No" );
    }
    return 0;
}


//solution 2

#include <iostream>
 
using namespace std;
 
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
bool isOdd( int a ) { return a % 2 != 0; }
 
int main()
{
    fast;
    int t; cin >> t;
    reshad:
    while( t-- ) {
        int n, x, num, odd = 0, even = 0;
        cin >> n >> x;
        for( int i = 0; i < n; i++ ) {
            cin >> num;
            if( isOdd( num ) ) odd++;
            else even++;
        }
        if( !odd ) { puts("NO"); goto reshad; }
        if( !even ) { puts( isOdd( x ) ? "YES" : "NO" ); goto reshad; }
        if( !isOdd( odd ) ) --odd;
        puts( odd + even < x ? "NO" : "YES" );
    }
    return 0;
}
