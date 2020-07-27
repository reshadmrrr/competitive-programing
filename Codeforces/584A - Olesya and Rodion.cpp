#include <iostream>

using namespace std;

void numgen( int n, int t )
{
    for( int i = 0; i < n; ++i ) cout << t;
    cout << "\n";
}
void numgen1( int n )
{
    for( int i = 0; i < n; ++i )
        if( i == 0 ) cout << "1";
        else cout << "0";
    cout << "\n";
}

int main()
{
    int n, t;
    cin >> n >> t;
    if( n < 2 && t == 10){
        cout << "-1\n";
        return 0;
    }
    if( t == 10 ) numgen1( n );
    else    numgen( n , t );
    cout << "\n";

    return 0;
}
