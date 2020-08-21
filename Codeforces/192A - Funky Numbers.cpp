#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, tmp;
    cin >> n;
    vector < int > v; 
    for( int i = 1; ; i++ ){
        tmp = ( i * (i + 1) ) / 2;
        if( tmp <= n ) v.push_back( tmp );
        else break;
    }

    for( int i = 0; i < v.size(); i++ ){
        if( binary_search( v.begin(), v.end(), n - v[i] ) ) {
            cout << "YES" << endl;
            return 0;
        } 
    }
    cout << "NO" << endl;
    return 0;
}
