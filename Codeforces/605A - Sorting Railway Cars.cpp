#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t, flag = 0;
    cin >> t;
    int a[t];

    for(int i = 0; i < t; i++) cin >> a[i];
    for( int i = 1 ; i < t; ++i ){
        if( a[i - 1] > a[i])    flag++;
    }
    cout << flag << endl;

    return 0;
}
