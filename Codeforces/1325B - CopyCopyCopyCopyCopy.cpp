#include <iostream>
#include <set>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t;  cin >>  t;
    while( t-- ) {
    	int n; cin >> n;
    	set < int > st;
    	int a;
    	for( int i = 0; i < n; i++ ){
    		cin >> a;
    		st.insert( a );
    	}
    	cout << st.size() << endl;
    	
    } 
    return 0;
}
