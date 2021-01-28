#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
      int a, b;
      cin >> a >> b;
      if( abs( a - b ) % 10 == 0 )
        cout << abs( a - b ) / 10 << endl;
      else 
        cout << abs( a - b ) / 10 + 1 << endl;

    }
    return 0;
}

