#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void srt( int a, int b, int c, int d ) {

}


int main()
{
    fast;
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a + 4);
    cout << a[3] - a[0] << " ";
    cout << a[3] - a[1] << " ";
    cout << a[3] - a[2] << " ";
    return 0;
}
