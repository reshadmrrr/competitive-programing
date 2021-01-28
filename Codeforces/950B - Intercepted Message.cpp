#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    
    int n, m; cin >> n >> m;
    int a[n], b[m];

    for( int i = 0; i < n; i++ ) cin >> a[i];
    for( int i = 0; i < m; i++ ) cin >> b[i];

    int i, j, suma, sumb, cnt; 
    i = j = 0; suma = sumb = 0; cnt = 0;
    
    while( i < n and j < m ) {
        
        suma += a[i];
        sumb += b[j];

        if( suma == sumb ) {
            i++;
            j++;
            cnt++;
        } 
        else if( suma > sumb ) {
            a[i] = 0;
            j++;
        } 
        else {
            i++;
            b[j] = 0;
        }
    } 
    cout << cnt << endl;
    return 0;
}

