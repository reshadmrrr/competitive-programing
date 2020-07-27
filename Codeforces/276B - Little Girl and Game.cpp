#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int tmp[26] = {0}, cnt = 0;
    int sz = s.size();
    for( int i = 0; i < sz; ++i ) tmp[s[i] - 'a']++;
    for( int i = 0; i < 26; ++i )
        if( tmp[i] % 2 != 0 ) cnt++;

    if( cnt == 0 ) cnt++;

    if( cnt % 2 == 0) cout << "Second\n";
    else cout << "First\n";


    return 0;
}
