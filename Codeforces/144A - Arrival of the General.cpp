#include <iostream>

#define yo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    yo;

    int n;
    cin >> n;
    int a[n];

    int mx = -9999, mn = 9999,   mnid = 0, mxid = 0;

    for ( int i = 0; i < n; ++i ){
        cin >> a[i];
        if( a[i] > mx ){ mx = a[i], mxid = i;}
        if( mn >= a[i] ) { mn = a[i], mnid = i;}
    }

    if(mxid > mnid)  cout << n - mnid - 2 + mxid << "\n";
    else cout << n - mnid - 1 + mxid << "\n";

    return 0;
}


