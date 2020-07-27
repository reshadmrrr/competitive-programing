#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sz = s.size(), cnt = 0;

    for( int i = 0; i < sz ; ++i ) if( s[i] == '0' ) cnt++;

    if( cnt == 0 ){
        for( int i = 0; i < sz - 1; ++i ) cout << s[i];
    }
    else{
        for( int i = 0; i  < sz; ++i ){
            if( cnt != 0 && s[i] == '0'){
                cnt = 0;
                continue;
            }
            else cout << s[i];
        }
    }
    cout << "\n";

    return 0;
}
