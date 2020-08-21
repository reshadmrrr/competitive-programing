#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int d[6];

int sq( int a ){ return a * a; }

void check( string s ) {
    int x = sq( d[0] - d[2] ) + sq( d[1] - d[3] );
    int y = sq( d[2] - d[4] ) + sq( d[3] - d[5] );
    int z = sq( d[0] - d[4] ) + sq( d[1] - d[5] );
    if( (x and y and z) == 0 ) return; 
    if( x + y == z or x + z == y or x == y + z) {
        cout << s << endl;
        exit(0);
    } 
}


int main()
{
    fast;
    for( int i = 0; i < 6; i++ ) cin >> d[i];
    check( "RIGHT" );
    for( int i = 0; i < 6; i++ ){
        d[i]++;
        check( "ALMOST" );
        d[i] -= 2;
        check( "ALMOST" );
        d[i]++;
    }
    cout << "NEITHER" << endl;
    return 0;
}