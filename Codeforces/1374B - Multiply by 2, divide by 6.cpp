#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    int t;
    cin >> t;
    while( t-- ){
        int n, c2 = 0, c3 = 0; 
        cin >> n;
        while( n % 2 == 0 ){
            n /= 2;
            ++c2;
        } 
        while( n % 3 == 0 ){
            n /= 3;
            ++c3;
        }

        if( n > 1 || c2 > c3 ) 
            cout << "-1" << endl; 
        else
            cout << c3 - c2 + c3 << endl;




    } 


    return 0;
}
