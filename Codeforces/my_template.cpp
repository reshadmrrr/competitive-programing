#include <bits/stdc++.h>

using namespace std;

#define si( a ) scanf( "%d" , &a )
#define ss( a ) scanf( "%s" , &a )
#define sll( a ) scanf( "%lld" , &a )
#define pfsn( a ) printf( "%s\n", s );
#define pfn() printf("\n");
#define pb( a ) push_back( a )
#define all( a ) a.begin(), a.end()
#define allrv( a ) a.rbegin(), a.rend()
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

// bool isOdd( int a ) { return a % 2 != 0; }
// bool isEven( int a ) { return a % 2 == 0; }
// binary exponential O(logN) a. k. a. powerfinding. 
 /* ll bipow( ll a, ll b ) {
    ll result = 1;
    while( b > 0 ){
        if( b % 2 == 1 ) result = ( result * a) % M;
        a = ( a * a ) % M;
        b /= 2; 
    } 
    return result;
} */ 

/*
bool coprime(int a, int b) {return  __gcd(a, b) == 1 ? true : false;}
*/
int main()
{
    fast;


    return 0;
}