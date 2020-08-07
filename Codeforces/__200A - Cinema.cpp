#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  fast;

  int n, m, k;
  cin >> n >> m >> k;

  vector < int >  v[k];
  bool chk = false;

  for ( int i = 0; i < k; i++ ) {
    cin >> a[i][0] >> a[i][1];
  }

  sort( a, k );

  for ( int i = 0; i < k; i++ ) {
    cout << a[i][0] << " " << a[i][1] << endl;
  }

  return 0;
}


