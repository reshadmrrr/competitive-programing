#include <bits/stdc++.h>

using namespace std;

#define si( a ) scanf( "%d" , &a )
#define pb( a ) push_back( a )
#define all( a ) a.begin(), a.end()
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define READ( f ) freopen( f, "r", stdin )
#define WRITE( f ) freopen( f, "w", stdout )
#define MAX 1000000001

typedef long long ll;
typedef vector < int > vi;
// convert a whole string to integer 
/* bool isNum(string line)
{
    char* p;
    strtol(line.c_str(), &p, 10);
    return *p == 0;
} */
// seive
/* vector < bool > prime(MAX, true); 
void sieve( int MAX ){
    prime[0] = prime[1] = false;
    for( int i = 2; i <= n; i++ ){
        if( prime[i] and (ll) i * i <= n )
            for( int j = i * i; j <= n; j += i)
                prime[j] = false; 
    }
} */ 


int main()
{
    fast;
    vi v;
    v.pb( 1 );#define MAX 1000000001
vector < bool > prime(MAX, true); 

void sieve( int MAX ){
    prime[0] = prime[1] = false;
    for( int i = 2; i <= n; i++ ){
        if( prime[i] and (ll) i * i <= n )
            for( int j = i * i; j <= n; j += i)
                prime[j] = false; 
    }
}


    ll yo = 1;
    v.pb( 2 );
    cout << yo << endl; 

    //for(auto u : v      ) cout << u << endl;
    if( 2 % 10 == 2 ) 
    cout << "Ok" << endl;

    return 0;
}