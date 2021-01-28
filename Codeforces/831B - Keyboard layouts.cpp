#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string a, b, s;
    cin >> a >> b >> s;
    char tmp; int sz = s.size(), az = a.size();
    for( int i = 0; i < sz; i++ ) {
        for( int j = 0; j < az; j++ ){
            if( tolower( s[i] ) == a[j] ) { 
                if( isupper( s[i] ) ){ tmp = toupper( b[j] ); cout << tmp; break;}
                else { cout<< b[j]; break; }
            }
            else if( !isalpha( s[i] ) ) {cout << s[i]; break;}
            
        }
    }

    return 0;
}
