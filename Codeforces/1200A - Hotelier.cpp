#include <iostream>
#include <vector>
 
using namespace std;
 
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main()
{
    fast;
    int n, a[10] = {0}; string s; 
    cin >> n >> s;
    
    for( int i = 0; i < n; i++ ) {
        if( s[i] == 'L' ) {
            for( int j = 0; j < 10; j++ ) {
                if( a[j] == 0 ) {
                    a[j] = 1;
                    break;
                } 
            }
        }
        else if( s[i] == 'R' ) {
            for( int j = 9; j >= 0; j-- ) {
                if( a[j] == 0 ) {
                    a[j] = 1;
                    break;
                }
            }
        }
        else {
            a[ s[i] - '0' ] = 0;
        }  
    }
 
    for( int i = 0; i < 10; i++ ) cout << a[i];
    cout << endl;
    return 0;
}