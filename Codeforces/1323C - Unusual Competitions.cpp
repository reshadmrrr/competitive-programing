#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, cnt = 0, ans = 0;
    string s;
    cin >> n >> s;
    for( int i = 0; i < n; i++ ){
        if( s[i] == '(' ) ++cnt;
        else              --cnt;
        if( cnt < 0 or ( cnt == 0 and s[i] == '(' ) ) ans++;
    }

    if( cnt == 0 ) cout << ans << endl;
    else           cout << -1 << endl; 


}
