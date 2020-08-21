#include <iostream>
#include <stdio.h>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int a[n];
        for( int i = 0; i < n; i++ ) cin >> a[i];
        if( a[0] + a[1] <= a[n - 1]) printf("1 2 %d\n", n);
        else printf("-1\n");
    } 
    return 0;
}
