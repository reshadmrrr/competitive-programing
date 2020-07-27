#include <iostream>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    int t; 
    cin >> t; 
    while( t-- ) {
        int n, m, x, y, sol = 0;
        string s;

        cin >> n >> m >> x >> y;

        y = min( y, 2 * x );
        
        for( int i = 0; i < n; i++ ){
            cin >> s;
            for( int j = 0; j < m; j++ ){
                if( s[j] == '.' ){
                    if( s[j] == s[j + 1] && j + 1 < m ){
                        sol += y;
                        ++j;
                    }else {
                        sol += x; 
                    } 
                } 

            }
        }
        cout << sol << endl;
                 
    }

   

    return 0;
}
