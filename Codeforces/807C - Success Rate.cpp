#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- ){
        int cnt = 0;
        double x, y, p, q;
        cin >> x >> y >> p >> q;
        while( x / y != p / q ){
            if( x != y && p == q ){ cout << "-1\n"; return 0; }
            if( x == p && y == q ){ cout << "0\n"; return 0; }
            if( x / y  < p / q){ x++; y++; cnt++; }
            else { y++; cnt++; }
        }
        cout << cnt << "\n";
    }
    return 0;
}



