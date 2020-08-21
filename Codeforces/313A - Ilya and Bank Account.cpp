#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, n1, n2;
    cin >> n;
    if( n >= 0 ) cout << n << endl;
    else{
        n1 = n / 10; //cout << n1 << endl;
        n2 = ( n / 100 ) * 10 + n % 10; //cout << n2 << endl;
        if( n1 > n2 ) cout << n1 << endl;
        else cout << n2 << endl; 


    } 
    return 0;
}
