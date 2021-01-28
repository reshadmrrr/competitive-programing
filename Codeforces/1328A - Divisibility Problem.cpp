#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t, a, b, d; cin >> t;
    while( t-- ) {
        cin >> a >> b;
        if( a % b == 0 ) cout << 0 << endl; 
        else{
            d = a / b;
            d++;
            cout <<  d * b - a << endl;
        }

    } 
    return 0;
}
