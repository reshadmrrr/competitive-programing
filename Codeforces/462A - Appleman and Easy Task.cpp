#include <iostream>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n;
    cin >> n;
    string s1 = "", s2 = "";
    string s;
    for( int i = 0; i < n; i++ ){
        cin >> s;
        s1 += s;
        s2 += s;
    }
    reverse( s2.begin(), s2.end() );
    puts( s1 == s2 ? "YES" : "NO" );
    return 0;
 }
