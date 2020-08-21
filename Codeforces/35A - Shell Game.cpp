#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    freopen( "input.txt", "r", stdin );
    freopen( "output.txt" , "w", stdout );

    int n, a, b;
    
    cin >> n;
    
    int arr[] = { 0, 1, 2, 3 };
    
    for( int i = 0; i < 3; i++ ){
        cin >> a >> b; 
        swap( arr[a], arr[b] );
    }

    cout << arr[n] << endl;

    return 0;
}
