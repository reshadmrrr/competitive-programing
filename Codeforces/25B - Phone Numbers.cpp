#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    for( int i = 0; i < n; ++i ){
        cout << s[i];
        if( i % 2 && i < ( n - 2 - n % 2 ) ) cout << '-';
    }

    cout << "\n";

    return 0;
}
