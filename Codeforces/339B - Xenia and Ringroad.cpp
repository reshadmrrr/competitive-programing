#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, m;
    cin >> n >> m;
    int a, tmp = 0, pos = 1, sum = 0;
    for( int i = 0; i < m; ++i ) {
        cin >> a;
        if(tmp == a) continue;
        sum += pos < a ? a - pos:n - pos + n - a;
        pos = tmp = a;
    }

    cout << sum << endl;
    return 0;
}
