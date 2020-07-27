#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int x, cnt = 0;
    for( int i = 0; i < n; ++i ){
        cin >> x;
        if( x > h) cnt++;
    }
    cout << n + cnt << "\n";



    return 0;
}
