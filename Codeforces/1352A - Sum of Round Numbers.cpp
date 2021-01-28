#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        int num; cin >> num;
        vector < int > v; int n = 1;
        while( num > 0 ) {
            if( num % 10 > 0 ) v.push_back( ( num % 10 ) * n );
            num /= 10;
            n *= 10;
        } 
        cout << v.size() << endl;
        for( auto u : v ) cout << u << " ";
        cout << endl;
    }

    return 0;
}
