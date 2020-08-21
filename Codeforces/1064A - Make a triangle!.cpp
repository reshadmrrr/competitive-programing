#include <iostream>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




int main()
{
    fast;
    int a[3];
    for( int i = 0; i < 3; i++ ) cin >> a[i];
    sort( a, a + 3 );
    if( a[0] + a[1] > a[2] ) cout << 0 << endl;
    else cout << a[2] - a[0] - a[1] + 1 << endl; 

    return 0;
}
