#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long


int main()
{
    fast;
    int t;
    ll a;
    cin >> t;
    while( t-- ){
        cin >> a;
        ll f = 1;
        if( a % 2 == 0 ) { cout << a / 2 << " " << a / 2  << endl; } 
        else {
            for( ll i = 2; i * i <= a; i++ )
                if( a % i == 0 ) {f = a / i; break;} 
        
            cout << f << " " << a - f << endl;
        }
    } 
    return 0;
}
