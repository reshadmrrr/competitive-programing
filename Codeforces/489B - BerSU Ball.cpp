#include <iostream>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int nb, ng, b[101], g[101], cnt = 0;
    cin >> nb;
    for( int i = 0; i < nb; i++ ) 	cin >> b[i]; sort(b, b + nb);
    cin >> ng;
    for( int i = 0; i < ng; i++ ) 	cin >> g[i]; sort(g, g + ng);

    for( int i = 0; i < nb; i++ )
    	for( int j = 0; j < ng; j++ )
    		if( abs( b[i] - g[j] ) <= 1 and b[i] != 0 and g[j] != 0 ) {
    			cnt++;
    			b[i] = 0;
    			g[j] = 0;
    		}
    cout << cnt << endl;
    

    return 0;
}
