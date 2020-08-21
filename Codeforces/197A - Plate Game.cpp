#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int a, b, r; 
    cin >> a >> b >> r; 
    puts( ( 2 * r <= a && 2 * r <= b) ? "First" : "Second" );
    return 0;
}
