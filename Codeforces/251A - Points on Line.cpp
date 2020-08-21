#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;


int main()
{
    fast;
    ll n, d;
    cin >> n >> d;
    vector < ll > a(n);
    
    for( ll i = 0; i < n; i++ ) cin >> a[i];
    
    if( n < 3 ){ cout << 0 << endl; return 0;} 
    
    ll ans = 0;
    ll in, p;
    
    for( ll i = 0; i < n; i++ ){
        in = lower_bound( a.begin(), a.end(),  a[i] + d ) - a.begin();
        if( in == n || a[in] != (a[i] + d )) in--;
        p = in - i - 1;
        ans +=  (p * (p + 1) / 2) ;
    }

    cout << ans << endl;
    return 0;
}
