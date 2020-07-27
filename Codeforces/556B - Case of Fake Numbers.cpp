#include <iostream>

using namespace std;


#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    int n; 
    cin >> n; 
    
    int a[n];
    for( int i = 0; i < n; i++ ) cin >> a[i];
    
    int p = n - a[0];
    for( int i = 0; i < n; i++ ){
        if( i % 2 == 0 )    a[i] += p;
        else                a[i] -= p;

        if( a[i] > n - 1 )  a[i] -= n;
        if( a[i] < 0 )      a[i] += n;

        if( a[i] != i ){
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
    
}
