#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector < int > v;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for( int i = 0 ; i < n ; ++i ) cin >> a[i];
    sort( a, a + n);
    for( int i = 0 ; i < n ; ++i )
        for( int j = 0; j < n; ++j )
            if( a[j] > a[i] && a[j] % a[j] == 0){
                v.push_back( a[i] );
                v.push_back( a[j] );

            }
    for( int i = 0; i < n; ++i ){
        if( (i + 1) % 3 == 0 ) cout << "\n";
        cout << v[i] << " ";
    }



    return 0;
}
