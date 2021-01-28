#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n; cin >> n;
    for( int i = 1; i <= n; i++ ){
        if( i == n ) {
            if( i & 1 ) cout << "I hate it ";
            else        cout << "I love it ";             
        }
        else{
            if( i & 1 ) cout << "I hate that ";
            else        cout << "I love that ";  
        } 
          
    }
    return 0;
}
