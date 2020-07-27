#include <iostream>
#include <set>

using namespace std;

int main()
{
    set < char > s;
    int n;
    cin >> n;
    char ch[n];
    for( int i = 0; i < n; ++i ){
        cin >> ch[i];
        ch[i] = tolower( ch[i] );
        s.insert( ch[i] );
    }

    if( s.size() == 26 ) cout << "YES\n";
    else cout<< "NO\n";

    return 0;
}
