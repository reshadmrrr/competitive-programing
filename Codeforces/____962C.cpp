#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector < int > spitInt( int n ) {
    vector < int > v;
    while( n > 0 ) {
        v.push_back( n % 10 );
        n /= 10;
    }
    reverse( v.begin(), v.end() );
    return v; 
}

int main()
{
    fast;
    int n, cnt, ans, vsz, visz; cin >> n;
    
    if( ceil( sqrt( n ) ) == sqrt( n ) ) return !(cout << 0 << endl); 
    
    vector < int > vi, v, vtmp;
    v = spitInt( n );
    vsz = v.size();
    
    for( auto u : v  ) cout << u << " "; cout << endl;
    //for( int i = 0; i < v.size() - 1; i++ ) cout << v[i] << " ";
    
    for( int i = 1; i * i <= n / 10 + i ; i++ ) {
        vi = spitInt( i * i );
        visz = vi.size();
        vtmp = v;
        ans = -1;
        cnt = 0;
        for( auto u : vi ) cout << u << " "; cout << "Size: " << visz << endl;
        for( int j = 0; j < visz; j++ ) {
            for( int k = 0; k < vsz; k++ ) {
                if( vi[j] == vtmp[k] ) {
                    cnt++;
                    vtmp[k] = -1;
                }
            }
            if( cnt == visz ) ans = max( ans, cnt );
        }
        cout << "This is the ans: "<<ans << endl;
        
         
        //cout << ans << endl;
    } 
    return 0;
}
