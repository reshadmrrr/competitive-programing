#include <iostream>
#include <math.h>

using namespace std;

#define easy  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    easy;
    int n;
    long long sum = 0;
    cin >> n;
    for( int i = 1; i <= n ; ++i ) sum += (double) pow( 2, i );

    cout << sum << "\n";

    return 0;
}
