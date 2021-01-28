#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        int n, odd = 0, a; 
        cin >> n;
        for(int i = 0; i < n; ++i ){
            cin >> a;
            if( a % 2 ) odd++;  
        }
        puts( odd % 2 or odd % n ? "YES" : "NO");                                     
    }
    return 0;
}

