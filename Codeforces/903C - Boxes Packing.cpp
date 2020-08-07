#include <iostream>
#include <map>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    int n, num, mx = INT_MIN;
    map < int, int > m; 

    cin >> n; 

    for( int i = 0; i < n; i++ ){
      cin >> num;
      m[num]++;
      mx = max( mx, m[num]);
    }
    
    cout << mx << endl;
    
    return 0;
}
