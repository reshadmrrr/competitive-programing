#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, m ,k;
    cin >> n >> m >> k;
    bool a[n], b[m], c[n][m];
    for( int i = 0; i < n; i++ ) cin >> a[i];
    for( int i = 0; i < m; i++ ) cin >> b[i];

    for( int i = 0; i < n; i++ )
        for( int j = 0; j < m; j++ )
            c[i][j] = a[i] * b[j];

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ )
            cout << c[i][j] << " ";
        cout << endl;
        }

    return 0;
}
