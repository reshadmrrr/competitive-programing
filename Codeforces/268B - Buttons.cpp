#include <iostream>

using namespace std;

double fact( int n )
{
    double prod = 1;
    for( int i = 2; i <= n; ++i ) prod *= (double) i;
    return prod + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << fact( n ) << "\n";
    return main();
}
