#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    int sz = s.size();
    for( int i = 0 ; i < sz; ++i )
        if( s[i] == tolower( s[i] ) ) cnt++;
    if( cnt == 0 )
        for( int i = 0 ; i < sz; ++i ){
            s[i] = tolower(s[i]);
    }
    else if( cnt == 1 && s[0] == tolower( s[0] ) ){
        s[0] = toupper( s[0] );
        for( int i = 1; i < sz; ++i)
            s[i] = tolower( s[i] );
    }

    cout << s << "\n";


    return 0;
}
