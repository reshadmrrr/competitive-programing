#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << (int)(sqrt(( x*z )/y ) + sqrt(( y*x )/z ) + sqrt(( z*y )/x ))*4 << "\n";

    return 0;
}
