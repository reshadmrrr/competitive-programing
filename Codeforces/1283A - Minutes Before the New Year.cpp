#include <iostream>
#include <cmath>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        int h, m; cin >> h >> m;
        cout << 1440 - h * 60 - m << endl;
    }
    return 0;
}
