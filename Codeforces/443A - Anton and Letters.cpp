#include <bits/stdc++.h>

using namespace std;

int main()
{
    set < char > st;
    string s;
    getline(cin,  s);
    int sz = s.size();
    for( int i = 0; i < sz; ++i )
        if( s[i] >= 'a' && s[i] <= 'z') st.insert( s[i] );

    cout << st.size() << "\n";

    return 0;
}
