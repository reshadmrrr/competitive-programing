#include <iostream>

#define yo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    yo;
    int n, mx, mn, cnt = 0;
    cin >> n;
    int a[n];
    cin >> a[0];
    mx = a[0];
    mn = a[0];
    for ( int i = 1; i < n; ++i ) {
    	cin >> a[i];
    	if( mn > a[i] ) { mn = a[i], cnt++; }
    	if( a[i] > mx ) { mx = a[i], cnt++; }
    }

    cout << cnt << "\n";


    return 0;
}
