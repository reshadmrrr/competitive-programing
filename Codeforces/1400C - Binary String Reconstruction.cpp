#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        string s, w = ""; int x;
        cin >> s >> x;
        int n = s.size();
        
        
        for( int i = 0; i < n; i++ ) w += "1";

        for( int i = 0; i < n; i++ ){
          if( s[i] == '0' ){
            if( i + x < n ) w[i + x] = '0';
            if( i - x >= 0 ) w[i - x] = '0';
          } 

        }

        bool cool = true;

        for( int i = 0; i < n; i++ ){
            if( s[i] == '1'){
                if(( i - x >= 0 and  w[i - x] == '1' ) or ( i + x < n and w[i + x] == '1' )) continue;
                cool = false;
                break;
                 
            }
        }

        if( cool ) cout << w << endl;
        else cout << "-1" << endl; 
         
        

    } 
    return 0;
}
