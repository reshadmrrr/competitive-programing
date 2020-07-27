#include <iostream>


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'



int main()
{
    fast;
    
    int t;
    cin >> t; 
    while( t-- ){
        int x, y, n;
        cin >> x >> y >> n ;
        
        cout << (( n - y ) / x) * x + y << endl;     
    }


    return 0;
}
