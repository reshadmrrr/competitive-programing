#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;
 
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main() {
    ll n, cnt = 0; 
    cin >> n; 

    if( ceil( sqrt( n ) ) == sqrt( n ) ){
        cout << 0 << endl;
        return 0;
    } 

    ll num = n;

    vector < ll > vn, vi, vc;
    for( ll i = 10; num > 0;) {
        vn.push_back( num % i );
        num /= i;
    }
    sort( vn.begin(), vn.end() );
    // for( auto u : vn ) cout << u << " ";
    // cout << endl; 

    for( ll i = 1; i * i <= n / 10 ; i++ )  vi.push_back( i * i );
    
    // for( auto u : vi ) cout << u << " ";
    // cout << endl;
    
    for( ll i = vi.size() - 1; i >= 0; i-- ) { 
        vc.clear();
        ll num = vi[i];
        for( ll j = 10; num > 0; ) {
          //  if( num % j != 0 ) { 
                vc.push_back( num % j );
                num /= j;
            //}
        }
        // sort( vc.begin(), vc.end() );
        // for( auto u : vc ) cout << u << " ";
        // cout << endl;
        vector < ll > vnn = vn;
        for( ll i = 0; i < vc.size(); i++ ){
            if( binary_search( vnn.begin(), vnn.end(), vc[i] ) ){
                auto it = find( vnn.begin(), vnn.end(), vc[i] );
                ll index = distance( vnn.begin(), it );
                vnn[index] = -1;
                cnt++;  
            }
            else{
                cnt = 0;
                break;
            } 
        }
        if( cnt == vc.size() ){
            cout << vn.size() - vc.size() << endl;
            //cout << "Hi" << endl;
            return 0;
        } 

    }

    cout << -1 << endl;
    
    return 0;

}
 
 
 
