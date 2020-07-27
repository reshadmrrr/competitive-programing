#include <iostream>
#include <algorithm>
 
 
#define yo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
 
int main()
{
    yo;
    
    int n, m, min_a = 1000, max_a = -1, min_b = 1000;
    cin >> n >> m; 
 
    int a[n];
    for ( int i = 0; i < n; ++i ) {
        cin >> a[i];
        max_a = a[i] > max_a ? a[i] : max_a;
        min_a = a[i] < min_a ? a[i] : min_a;
    } 
 
    int b[m];
    for ( int i = 0; i < m; ++i ) {
         cin >> b[i];
         min_b = b[i] < min_b ? b[i] : min_b;
    }
    
    int final_a = 2 * min_a > max_a ? 2 * min_a : max_a;

    if(final_a < min_b) cout << final_a << endl;
    else                cout << "-1" << endl;
    
 
 
    return 0;
}