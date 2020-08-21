#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s;
    cin >> s;
    int abf = s.find( "AB" );
    int bas = s.find( "BA" , abf + 2 );
    int baf = s.find( "BA" );
    int abs = s.find( "AB", baf + 2 );
    puts( ( abf >= 0 and bas >= 0 ) || ( baf >= 0 and abs >= 0 ) ? "Yes" : "No");
    return 0;
}
