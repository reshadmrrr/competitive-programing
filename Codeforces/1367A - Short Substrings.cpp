#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        string s; cin >>  s;
        int n = s.size();
        for( int i = 2; i < n - 1; i++ ){
            if( s[i - 1] == s[i] ) s[i] = '0';
        }
        for( int i = 0; i < n; i++ ){
            if( s[i] == '0' ) continue;
            cout << s[i]; 
        }
        cout << endl;
    }           
    return 0;
}
