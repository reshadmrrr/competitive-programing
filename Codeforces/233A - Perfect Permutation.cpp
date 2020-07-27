#include <iostream>

#define yo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    yo;
    int n;
    cin >> n;
    if( n % 2 ){
        cout << "-1\n" ;
        return 0;
    }
    for( int i = 2; i <= n; i += 2 )
        cout << i << " " << i - 1 << " ";

    return 0;
}
