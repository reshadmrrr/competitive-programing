#include <iostream>
#include <algorithm>



using namespace std;

int main()
{
    int n, m, sum = 0 ;
    cin >> n >> m;
    int a[n];
    for( int i = 0; i < n; ++i ) cin >> a[i];
    sort( a, a + n );
    for( int i = 0; i < m; ++i )
            if( a[i] < 0) sum += a[i];
            else break;

    cout << -sum << "\n";

    return 0;
}
