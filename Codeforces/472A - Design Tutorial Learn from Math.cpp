#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n; cin >> n;
    if( n & 1 )
        printf( "%d %d\n", 9, n - 9 );
    else
        printf("%d %d\n", 8, n - 8 );
    return 0;
}
