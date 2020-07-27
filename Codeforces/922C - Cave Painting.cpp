#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    n++;

    for( int i = 1; i <= k; ++i )
        if( n % i != 0 ){
            cout << "No\n";
            return 0;
        }

    cout << "Yes\n";

    return 0;
}
