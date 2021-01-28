#include <iostream>
#include <vector>
 
using namespace std;
 
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    fast;
    int t, n; string s; 
    cin >> t;
    while( t-- )  {
        vector < string > vc;
        cin >> n >> s;
        string tmp = "";
       // int sz = 2 * n - 1;
        for( int i = 0; i < n; i++ ) {
            for( int j = i; j < i + n; j++ )
                tmp += s[j];
            vc.push_back( tmp );
            tmp = "";
        }
 
        for( int i = 0; i < n; i++ ){
            cout << vc[i][i];
        }
        cout << endl;
        vc.clear();
 
 
    } 
 
    return 0;
}