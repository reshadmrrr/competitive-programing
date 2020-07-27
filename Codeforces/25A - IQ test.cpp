#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], cntE = 0, cntO = 0, E, O;
    for( int i = 0 ; i < n ; ++i ){
        cin >> a[i];
        a[i] % 2 ? ( cntO++, O = i + 1 ) : ( cntE++, E = i + 1 );
        }

    cntE == 1 ? cout << E << "\n" : cout << O << "\n";


    return 0;
}
