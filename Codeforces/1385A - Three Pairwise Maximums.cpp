#include <iostream>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t, a[3];
    cin >> t;
    while( t-- ) {
        cin >> a[0] >> a[1] >> a[2];
        sort( a, a + 3);
        if( a[1] != a[2] ) printf("NO\n");
        else printf("YES\n%d %d %d\n", a[0], a[0], a[2]); 
    }  
    return 0;  
}
