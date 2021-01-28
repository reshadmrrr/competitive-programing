#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n;
    cin >> n;
    int a[n];
    for( int i = 0; i < n; i++ ) cin >> a[i];

    int i = 1;
    while( i < n and  a[i - 1] < a[i] ) ++i;
    while( i < n and a[i - 1] == a[i]) ++i;
    while( i < n and  a[i - 1] > a[i] ) ++i;   
    
    puts( i == n ? "YES" : "NO" );

 
    return 0;
}
