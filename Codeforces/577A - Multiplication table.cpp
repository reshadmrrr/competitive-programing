#include <iostream>

using namespace std;

int main()
{
    unsigned long long n, x;
    int cnt = 0;
    cin >> n >> x;
    for( unsigned long long i = 1; i <= n; ++i )
            if( x % i == 0 && (x / i) <= n ) cnt++;

    cout << cnt << "\n";
    return 0;


}

