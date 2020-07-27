#include <iostream>
#include <math.h>
 
 
#define yo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
 
int main()
{
    int ax, ay, bx, by, cx, cy; 
    cin >> ax >> ay >> bx >> by >> cx >> cy; 

    double ar = sqrt( ax * ax  +  ay * ay );
    
    double O = atan( ay / ax );
    
    double nx = ar * cos( O - 90 );
    double ny = ar * sin( O - 90 );

    nx += ( double ) cx;
    ny += ( double ) cy; 

    if( nx == bx && ny == by ) cout << "YES\n";
    else                       cout << "NO\n";
 
 
    return main();
}