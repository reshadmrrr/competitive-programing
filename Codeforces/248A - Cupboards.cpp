#include <iostream>

using namespace std;

int main()
{
    int  n, a, b, aa = 0, bb = 0;
    cin >> n;
    for(int i = 0 ; i < n; ++i){
        cin >> a >> b;
        aa += a;
        bb += b;
    }
    cout << ( min( aa, n - aa) + min( bb, n - bb)) << "\n";


    return 0;
}

