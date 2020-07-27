#include <iostream>

using namespace std;

int main()
{
    int n, acnt = 0, dcnt = 0;
    cin >> n ;
    char ch[n];
    for( int i = 0 ; i < n; ++i ){
        cin >> ch[i];
        if( ch[i] == 'A') acnt++;
        if( ch[i] == 'D') dcnt++;
    }
    if( acnt > dcnt ) cout << "Anton\n";
    else if( dcnt > acnt ) cout << "Danik\n";
    else cout << "Friendship\n";


    return 0;
}
