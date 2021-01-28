#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int k, r;
    cin >> k >> r; 
    for( int i = 1; ; i++ ) {
        if( ( k * i ) % 10 == 0 or ( k * i - r ) % 10 == 0 ) {
            cout << i << endl;
            return 0;
        }
    }
}
