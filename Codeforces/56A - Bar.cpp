#include <iostream>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isNum(string line)
{
    char* p;
    strtol(line.c_str(), &p, 10);
    return *p == 0;
}

int main()
{
    fast;
    string mod[] = { "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int n, ans = 0; cin >> n;
    string s;
    for( int i = 0; i < n; i++ ){
        cin >> s;
        if( isNum( s ) and stoi( s ) < 18) ans++;
        else if( binary_search(mod, mod + 11, s) ) ans++;
    }

    cout << ans << endl;
    return 0;
}
