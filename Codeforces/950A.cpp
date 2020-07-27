#include <iostream>

using namespace std;

int main()
{
    int l, r, a;
    cin >> l >> r >> a;
    while( a > 0 ){
        if( l <= r ) l++;
        else r++;
        a--;
    }
    cout << 2*min( l , r ) << "\n";

    return 0;
}
