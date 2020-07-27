#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for( int i = 0; i < n; ++i ) cin >> a[i];
    int cnt = 1;
    while( cnt <= n){
    for( int i = 0 ; i < n; ++i )
        if( a[i] == cnt ){
         cout << i + 1 << " ";
         goto reshad;
         }
         reshad:
         cnt++;
    }
    cout << "\n";

    return 0;
}
