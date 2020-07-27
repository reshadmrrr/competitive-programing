#include <iostream>
#include <algorithm>
 
 
using namespace std;
 
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    fast;
    
    int n, m, d = 1001;
    cin >> n >> m;
 
    int a[m];
    for( int i = 0; i < m; i++ ) cin >> a[i];
    
    sort(a, a + m);
 
    for(int i = 0; i < m - n + 1; i++ ) d = min(d, a[i + n - 1] - a[i]); 
 
    cout<< d <<endl;
 
    return 0;
}