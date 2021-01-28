#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, a, check = 0, mx = 0; 
    cin >> n;
    for( int i = 0; i < n; i++ ){
        cin >> a;
        if( a < 0 ) check++; 
        else check -= a;
        mx = max(mx, check);
    }
    cout << mx << endl;
    return 0;
}
    