#include <iostream>
#include <vector>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

bool prime( int n ) {
    for( int i = 3; i * i <= n; i += 2 ){
        if( n % i == 0 ) return false; 
    }
    return true;
}

int main()
{   
    fast;

    int n;
    cin >> n;
    if( prime( n ) )  cout << "1\n"<< n << endl; 
    else {
        cout << "3\n3 ";
        n -= 3;
        for( int i = 3; i < n; i += 2 ){
            if( prime( i ) and prime( n - i ) ) {
                cout << i << " " << n - i << endl;
                return 0;
            } 

        }
    } 
       

    return 0;
}