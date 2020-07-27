#include <iostream>

using namespace std;



int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    int sz = s.size();

    for( int i = 0; i < sz / 2 ; ++i )
        if( s[i] != s[sz - i - 1] ) cnt++;

    if( cnt == 1 || ( cnt == 0 && sz % 2 != 0) ) cout << "YES\n";
    else    cout << "NO\n";

    return 0;
}
