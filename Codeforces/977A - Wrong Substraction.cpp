#include <iostream>

using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, k;
    cin >> n >> k;
    while( k-- ){
        if( n % 10 ) n--;
        else n /= 10;
    }

    cout << n << endl;
    return 0;
}
