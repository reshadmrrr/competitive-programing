#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int h, m;
    int hh = -1, mm = -1, cnt = 1 , mx = 1;
    while ( t-- ){
        cin >> h >> m;
        if( hh == h && mm == m){
            cnt++;
            mx = max ( mx, cnt);
        }
        else cnt = 1;

        hh = h;
        mm = m;

    }

    cout << mx << "\n";

    return 0;
}
