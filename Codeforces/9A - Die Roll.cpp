#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int a, b, t; cin >> a >> b;
    t = max( a, b );
    switch( t ) { 
      case 1:
        cout << "1/1" << endl;
        break;
      case 2:
        cout << "5/6" << endl;
        break;
      case 3:
        cout << "2/3" << endl;
        break;
      case 4:
        cout << "1/2" << endl;
        break;
      case 5:
        cout << "1/3" << endl;
        break;
      case 6:
        cout << "1/6" << endl;
        break;
      default:
        cout << "1/1" << endl;
        break;
    }

    return 0;
}
