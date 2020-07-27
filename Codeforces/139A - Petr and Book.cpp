#include <iostream>

using namespace std;

int main()
{
    int n, d, cnt = 0, flag = 0;
    cin >> n;
    for ( int i = 0; i < 7; ++i ){
        cin >> d;
        if( d == 0) {flag++; continue;}
        n -= d;
        cnt++;
        if( n <= 0) break;


    }
    if( cnt > flag ) cout << cnt << "\n";
    else cout << 7 - flag << "\n";

    return 0;
}
