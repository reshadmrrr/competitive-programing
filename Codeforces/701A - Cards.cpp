#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, a; cin >> n;
    vector < pair < int, int > > v;
    for( int i = 0; i < n; i++ ) {
      cin >> a;
      v.push_back( make_pair( a, i + 1 ) );
    }
    sort( v.begin(), v.end() );
    for( int i = 0; i < n / 2; i++ ) {
      cout << v[i].second << " " << v[n - 1 - i].second << endl;
    } 
    return 0;
}
