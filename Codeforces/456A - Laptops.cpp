#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n;
    char a[n][n];
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            cin >> a[i][j];
        }
    }
    return 0;
}
