#include <iostream>
#include <stdio.h>
#include <algorithm>

#define yo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    yo;
    int n, l, mx = -9999;
    cin >> n >> l;
    int a[n];
    for( int i = 0; i < n; ++i ) cin >> a[i];

    sort( a, a + n );

    for( int i = 1; i < n; ++i ) mx = max( mx, a[i] - a[i - 1] );

    double x = mx * 1.0 / 2.0;
    if( l - a[n - 1] > x ) x = l - a[n - 1];
    if( a[0] > x) x = a[0];

    printf("%.10lf\n", x);


    return 0;
}
