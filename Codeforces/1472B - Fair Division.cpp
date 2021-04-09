#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- )  {
    	 int n, cnt1 = 0, cnt2 = 0; cin >> n;
    	 int sum = 0;
    	 int a = 0, b = 0;
    	 for( int i = 0; i < n; i++ ) {
    	 	int t; cin >> t;
    	 	if( t == 1 ) 	cnt1++;
    	 	else 			cnt2++;	 
       	 }
       	 for( int i = 0; cnt2 > 0; i++ ){
       	 	if( i & 1 ) {
       	 		a += 2;
       	 		cnt2--;
       	 	} else {
       	 		b += 2;
       	 		cnt2--;
       	 	}
       	 }
       	 for(; cnt1 > 0 ;) {
       	 	if( a > b ) {
       	 		b++;
       	 		cnt1--;
       	 	} else {
       	 		a++;
       	 		cnt1--;
       	 	}

       	 }

       	 puts( a == b ? "YES" : "NO" );

 

    }
    return 0;
}

