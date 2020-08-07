#include <iostream>
#include <stdio.h>
#include <set>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef  pair < int, int > pairs;

int main()
{
    fast;
    int t, n, r, name, sub;
    cin >> t;
    for( int i = 1; i <= t; i++ ){
        cin >> n >> r;
        set < pairs > s; 
        for( int j = 0; j < r; j++ ){
            cin >> name >> sub;
            s.insert( make_pair( name, sub ) );
        }
        if( s.size() == r ) printf("Scenario #%d: possible\n", i);
        else                printf("Scenario #%d: impossible\n", i); 
    }
    return 0;
}
