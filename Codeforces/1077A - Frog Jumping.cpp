#include <iostream>

using namespace std;

int main()
{
    int t;
    unsigned long long a, b, c;
    long long sum = 0;
    cin >> t;
    while( t-- ){
        cin >> a >> b >> c;
        sum = ( a - b ) * ( c / 2);
        if( c % 2 != 0 ) sum += a;
        cout << sum << "\n";
        sum = 0;
    }


    return 0;
}
