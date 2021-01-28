#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int a, b, ans = 0;
    cin >> a >> b;
    while( a <= b ){
        a *= 3;
        b *= 2;
        ++ans;
    } 
    cout << ans << endl;

    return 0;
}
