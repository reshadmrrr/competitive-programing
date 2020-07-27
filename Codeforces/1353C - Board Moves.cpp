#include <iostream>

using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main()
{
    fast;
    
    int t;
    cin >> t; 
    int a[t];
    for( int i = 0; i < t; i++ ) cin >> a[i];
    for( int i = 0; i < t; i++ ){
    	int mid = ( a[i] + 1 ) / 2; 
    	long long sum = 0;
    	for( int j = 1,  mul = 8; j < mid; j++, mul += 8 ) sum += (long long) j * mul ;
    		
 
    	cout << sum << endl;
    }

    return 0;
}
