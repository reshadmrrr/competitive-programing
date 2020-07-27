#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, cnt1 = 0, cnt0 = 0;
    string s;
    cin >> n >> s;

    for( int i = 0 ; i < n ; ++i )
        if( s[i] == '1' ) cnt1++;
        else cnt0++;

    cout << fabs( cnt1 - cnt0 ) << "\n";

    return 0;
}
