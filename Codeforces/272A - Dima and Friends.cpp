#include <iostream>

using namespace std;

int main()
{
    int f, n, sum = 0, cnt = 0;
    cin >> f;
    for( int i = 0; i < f; ++i ){
        cin >> n;
        sum += n;
    }
    --sum;
    for( int i = 1; i <= 5; ++i ){
        if( (sum + i) % (f + 1) == 0 ) cnt++;
    }
    cout << 5 - cnt << "\n";

    return 0;
}
