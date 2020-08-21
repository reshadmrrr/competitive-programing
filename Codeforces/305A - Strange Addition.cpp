#include <iostream>
#include <vector>



using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, a, val = 0;
    bool c1 = 1, c10 = 1; 
    vector < int > v;
    cin >> n;
    for( int i = 0; i < n; i++ ){
        cin >> a;
        if( a == 0 || a == 100 ) v.push_back( a );
        else if( a < 10 && c1 ){ v.push_back( a ); c1 = 0; }
        else if( a % 10 == 0 && c10 ){ v.push_back( a ); c10 = 0 ;}
        else val = a;
    }
    if( c1 && c10 && val != 0 ) v.push_back( val );

    cout << v.size() << endl;
    for( auto u : v ) cout << u << " ";
    cout << endl; 
    
    return 0;
}
