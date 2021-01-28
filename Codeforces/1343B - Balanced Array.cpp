//1343B
#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        int n; cin >> n;
        if( (n / 2) & 1 ) cout << "NO" << endl; 
        else {
            int oddsum = 0, evensum = 0;
            vector < int > odd, even;
            for( int i = 0, num = 2; i < n / 2; i++, num += 2 ) { 
                even.push_back( num ); 
                evensum += num;
            }
            for( int i = 0, num = 1; i < n / 2; i++, num += 2 ) {
                odd.push_back( num );
                oddsum += num;
            }
            odd[n/2 - 1] += evensum - oddsum;
            

            cout << "Yes" << endl;
            for( auto num : even ) cout <<  num << " ";
            for( auto num : odd ) cout <<  num << " ";  cout << endl;
        
            
        }
    } 
    return 0;
}

//another solution

#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t; cin >> t;
    while( t-- ) {
        int n; cin >> n;
        if( ( n / 2 ) & 1 ) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            int o, e, i, j, sume = 0, sumo = 0;
            for(  i = 0, e = 2; i < n / 2; i++, e += 2 ) {
                cout << e << " ";
                sume += e;
            }
            for( j = 0, o = 1; j < n / 2 - 1; j++, o += 2 ) {
                cout << o << " ";
                sumo += o;
            }
            cout << sume - sumo << endl;
        } 
    } 
    return 0;
}
