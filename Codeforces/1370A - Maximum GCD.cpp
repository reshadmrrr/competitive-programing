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
        int a; 
        cin >> a;
        cout << a / 2 << "\n";
    }
    return 0;
}
