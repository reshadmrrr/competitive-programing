
#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
      int n; cin >> n;
      vector < int > v(n);
      for( auto &it : v ) cin >> it;
      sort( v.begin(), v.end() );
      bool check = true;
      for( int i = 1; i < n; i++ )
        if( v[i] - v[i - 1] > 1 ) { check = false; break; } 
      puts( check ? "YES" : "NO" );
      }
    return 0;
}
//1399A - Remove Smallest