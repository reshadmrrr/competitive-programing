#include <iostream>
#include <set>

using namespace std;

set < int > s;

int main()
{
    int n;
    cin >> n;

    int x, y, val;
    cin >> x;
    for( int i = 0 ; i < x ; ++i ){ cin >> val, s.insert(val); }
    cin >> y;
    for( int i = 0 ; i < y ; ++i ){ cin >> val, s.insert(val); }

    if( n == s.size() ) cout << "I become the guy.\n";
    else    cout << "Oh, my keyboard!\n";

    return 0;
}
