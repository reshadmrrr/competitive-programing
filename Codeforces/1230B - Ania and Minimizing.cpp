#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, k, cnt = 0; string s;
    cin >> n >> k >> s;
    
    if( n == 1 ){
        if( k == 0 ) cout << s[0] << endl;
        else cout << 0 << endl;
        return 0;  
    }  

    if( s[0] != '1' and cnt < k) {
        s[0] = '1';
        cnt++;
    } 
    for( int i = 1; cnt < k and i < n; i++ ) {
        if( s[i] != '0' ) {
            s[i] = '0';
            cnt++;
        } 
    }
    cout << s << endl;
    return 0;
}
