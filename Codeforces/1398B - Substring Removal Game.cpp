#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, cnt = 0, ans = 0; string s; vector < int > v;
    cin >> n;
    for( int i = 0; i < n; i++ ){
        v.clear();
        cin >> s;
        for( int i = 0; i < s.size() + 1; i++ ){
            if( s[i] == '1' ) cnt++;
            else{
                if( cnt ) v.push_back( cnt );
                cnt = 0;
            } 
        }
        sort( v.rbegin(), v.rend() );
        for( int i = 0; i < v.size(); i += 2 ) ans += v[i];
        cout << ans << endl;
        ans = 0;
        
    }
    return 0;
}

