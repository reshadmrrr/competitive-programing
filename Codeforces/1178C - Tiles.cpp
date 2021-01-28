#include <iostream>
#include <cmath>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const ll M = 998244353;

ll bipow( ll a, ll b ) {
    ll result = 1;
    while( b > 0 ){
        if( b % 2 == 1 ) result = ( result * a) % M;
        a = ( a * a ) % M;
        b /= 2; 
    } 
    return result;
}

int main()
{
    fast;
    ll w, h, ans;
    cin >> w >> h;
    cout << bipow( 2, w + h ) << endl;
    
    return 0;
}
