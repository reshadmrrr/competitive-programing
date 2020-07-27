#include <iostream>
#include <algorithm>


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; 
    cin >> t;
    while( t-- ) {
        int a, b;
        cin >> a >> b; 
        int x = 2 * min(a, b);
        if( x >= max(a, b) ) cout << x * x << endl;
        else{
            x = max(a, b);
            cout << x * x << endl;
        }
    }
    return 0;
}
