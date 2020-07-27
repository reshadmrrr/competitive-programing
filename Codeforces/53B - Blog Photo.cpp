#include <iostream>
#include <math.h>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    int h, w;
    cin >>  h >> w;

    if( ( h == 1 && w == 2 ) || ( h == 2 && w == 1 )){
      cout << "1 1" << endl;
      return 0;
    }

    int t = 1;

    while( 2 * t <= h && 2 * t <= w  ) t *= 2; 

    // cout << t << endl;

    int hx = min( h, (int)(1.25 * t) );
    int wx = min( w, (int)(1.25 * t) );

    // cout << hx << " " << wx << endl;


    if( hx >= wx ) cout << hx << " " << t << endl; 
    else cout << t << " " << wx << endl;

    return 0;
}
