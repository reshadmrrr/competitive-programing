//sol1
#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, m;
    cin >> n >> m;
    for( int i = (n + 1 ) / 2; i <= n; i++ ){
        if( i % m == 0 ){
            cout << i << endl;
            return 0;
        }  
    }
    cout << -1 << endl;
    

    return 0;
}

//sol2
#include <iostream>
#include <cmath>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, m;
    cin >> n >> m;
    if( n < m ) cout << -1 << endl;
    else
        cout << ( ( ( n + 1 ) / 2 + m - 1) / m ) * m << endl;
    return 0;
}

