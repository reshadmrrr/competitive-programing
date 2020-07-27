#include <iostream>

using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
    fast;
    int n, cnt = 1, mx = INT_MIN;
    cin >> n;
    long long a[n];
    for( int i = 0; i < n; ++i ) {
        cin >> a[i];
        if( n == 1) { cout << "1\n"; return 0;}
        if( i > 0 && a[i - 1] <= a[i] ){
                cnt++;
                mx = max(mx, cnt);
        }
        else cnt = 1;


    }
    cout << mx << "\n";

    return 0;
}
