#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- ){
        long long n, cnt = 2;
        cin >> n;
        for( long long i = 2; i*i <= n ; ++i ){
                if( n % i == 0 ) cnt++;
                if( cnt > 3 ){ cout << "NO\n"; break;}
        }
        if( cnt == 3 ) cout << "YES\n";
        if( cnt < 3 ) cout << "NO\n";
    }


    return main();
}
