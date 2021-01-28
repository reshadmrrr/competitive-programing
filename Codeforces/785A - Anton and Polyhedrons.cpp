#include <iostream>
#include <map>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    map < string, int > mp = {
        { "Tetrahedron", 4 },
        { "Cube", 6 },
        { "Octahedron", 8 },
        { "Dodecahedron", 12 },
        { "Icosahedron", 20 }
    };
    int n, sum = 0; cin >> n;
    string s;
    for( int i = 0; i < n; i++ ){
        cin >> s;
        sum += mp[ s ];

    }
    cout << sum << endl;
    return 0;
}
